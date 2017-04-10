//
// Created by Tanner on 1/17/17.
//

#include "client.h"

fpga mock_fpga;
preprocessor mock_preprocessor;
postprocessor mock_postprocessor;

mode cur_mode = not_set;
string file = "";

void parse_arguments(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        if(!strcmp(argv[i], "-c") || !strcmp(argv[i], "-d")) {
            cur_mode = !strcmp(argv[i], "-c") ? compress : decompress;
            if(i + 1 != argc) {
                file = argv[i+1];
            }
            i++;
        } else if(!strcmp(argv[i], "--help") || !strcmp(argv[i], "-h")) {
            cur_mode = help;
            break;
        } else if(!strcmp(argv[i], "-v")) {
            logger::set_level(debug);
        }
    }
}

void init_chunk(chunk * c) {
    for(int i = 0; i < 4; i++) {
        c->lines[i].chars = (char *) malloc(sizeof(char) * 1000);
    }
}

bool read_chunk(ifstream * stream, struct chunk * c) {
    for(int i = 0; i < 4; i++) {
        stream->getline(c->lines[i].chars, 1000);
        c->lines[i].length = stream->gcount() - 1;
//        logger::debug(c->lines[i].chars);
//        if(!stream->good() && i != 3 || stream->gcount() <= 0 || stream->gcount() == 1000) {
//            logger::log("error reading file");
//            exit(1);
//        }
    }
    return stream->good();
}

void perform_compression(ifstream * stream, ofstream * ostream) {
    chunk tmp_chunk;
    init_chunk(&tmp_chunk);

    while(read_chunk(stream, &tmp_chunk)) {
        mock_fpga.compress_sequence_data(mock_preprocessor.extract_sequence_data(&tmp_chunk));
        mock_fpga.compress_quality_score_data(mock_preprocessor.extract_quality_scores(&tmp_chunk));
        mock_preprocessor.remove_unncessary_data(&tmp_chunk);

        for(int i = 0; i < 4; i++) {
            ostream->write(tmp_chunk.lines[i].chars, tmp_chunk.lines[i].length);
            ostream->write("\n", 1);
        }
    }
}

void perform_decompression(ifstream * stream, ofstream * ostream) {
    chunk tmp_chunk;
    init_chunk(&tmp_chunk);

    while(read_chunk(stream, &tmp_chunk)) {
        mock_fpga.decompress_sequence_data(mock_preprocessor.extract_sequence_data(&tmp_chunk));
        mock_fpga.decompress_quality_score_data(mock_preprocessor.extract_quality_scores(&tmp_chunk));
        mock_postprocessor.add_unncessary_data(&tmp_chunk);

        for(int i = 0; i < 4; i++) {
            ostream->write(tmp_chunk.lines[i].chars, tmp_chunk.lines[i].length);
            ostream->write("\n", 1);
        }
    }
}

void client::execute(int argc, char *argv[]) {
    parse_arguments(argc, argv);
    switch(cur_mode) {
        case compress:
        {
            logger::log("compressing " + file);

            ifstream input;
            input.open(file);

            ofstream output;
            output.open(file + ".fuc");

            perform_compression(&input, &output);

            input.close();
            output.close();
            break;
        }

        case decompress:
        {
            logger::log("decompressing " + file);

            ifstream input;
            input.open(file);

            ofstream output;
            output.open(file.substr(0, file.length() - 4));

            perform_decompression(&input, &output);

            input.close();
            output.close();

            break;
        }

        case help:
        {
            logger::log("usage:");
            logger::log("  '-c <file>' to compress a FASTQ file");
            logger::log("  '-d <file>' to decompress a FUC file");
            logger::log("  optionally include '-v' to enable verbose mode");
            break;
        }

        default:
        {
            logger::log("no mode specified. use --help to see usage.");
        }
    }
}