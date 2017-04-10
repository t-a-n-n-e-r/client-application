//
// Created by Tanner on 1/17/17.
//

#include "fpga.h"

void fpga::compress_sequence_data(struct line *data) {
#ifdef debug_mode
    logger::debug("[fpga] received sequence data for compression:");
    logger::debug(data->chars);
    logger::debug("");
#endif

    strcpy(data->chars, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    data->length = 60;

#ifdef debug_mode
    logger::debug("[fpga] compression finished:");
    logger::debug(data->chars);
    logger::debug("");
#endif
}

void fpga::decompress_sequence_data(struct line *data) {
#ifdef debug_mode
    logger::debug("[fpga] received sequence data for decompression:");
    logger::debug(data->chars);
    logger::debug("");
#endif

    strcpy(data->chars, "GATTTGGGGTTCAAAGCAGTATCGATCAAATAGTAAATCCATTTGTTCAACTCACAGTTT");
    data->length = 60;

#ifdef debug_mode
    logger::debug("[fpga] decompression finished:");
    logger::debug(data->chars);
    logger::debug("");
#endif
}

void fpga::compress_quality_score_data(struct line *data) {
#ifdef debug_mode
    logger::debug("[fpga] received quality score data for compression:");
    logger::debug(data->chars);
    logger::debug("");
#endif

    strcpy(data->chars, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    data->length = 60;

#ifdef debug_mode
    logger::debug("[fpga] compression finished:");
    logger::debug(data->chars);
    logger::debug("");
#endif
}

void fpga::decompress_quality_score_data(struct line *data) {
#ifdef debug_mode
    logger::debug("[fpga] received quality scores for decompression:");
    logger::debug(data->chars);
    logger::debug("");
#endif

    strcpy(data->chars, "!''*((((***+))%%%++)(%%%%).1***-+*''))**55CCF>>>>>>CCCCCCC65");
    data->length = 60;

#ifdef debug_mode
    logger::debug("[fpga] decompression finished:");
    logger::debug(data->chars);
    logger::debug("");
#endif
}

