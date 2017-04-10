//
// Created by Tanner on 1/17/17.
//

#include "preprocessor.h"

struct line * preprocessor::extract_sequence_data(struct chunk * c) {
#ifdef debug_mode
    logger::debug("[preprocessor] received FASTQ for processing:");
    logger::debug(c->lines[0].chars);
    logger::debug(c->lines[1].chars);
    logger::debug(c->lines[2].chars);
    logger::debug(c->lines[3].chars);
    logger::debug("");
    logger::debug("[preprocessor] extracting sequence data: ");
    logger::debug(c->lines[1].chars);
    logger::debug("");
#endif

    return &c->lines[1];
}

struct line * preprocessor::extract_quality_scores(struct chunk * c) {
#ifdef debug_mode
    logger::debug("[preprocessor] received FASTQ for processing:");
    logger::debug(c->lines[0].chars);
    logger::debug(c->lines[1].chars);
    logger::debug(c->lines[2].chars);
    logger::debug(c->lines[3].chars);
    logger::debug("");
    logger::debug("[preprocessor] extracting quality scores: ");
    logger::debug(c->lines[3].chars);
    logger::debug("");
#endif

    return &c->lines[3];
}

void preprocessor::remove_unncessary_data(struct chunk * c) {
    memmove(c->lines[0].chars, &c->lines[0].chars[1], c->lines[0].length--);
    memmove(c->lines[2].chars, &c->lines[2].chars[1], c->lines[2].length--);
}
