//
// Created by Tanner on 2/26/17.
//

#include "postprocessor.h"

void postprocessor::add_unncessary_data(struct chunk * c) {
#ifdef debug_mode
    logger::debug("[postprocessor] received FASTQ for processing:");
    logger::debug(c->lines[0].chars);
    logger::debug(c->lines[1].chars);
    logger::debug(c->lines[2].chars);
    logger::debug(c->lines[3].chars);
    logger::debug("");
#endif

    memmove(&c->lines[0].chars[1], c->lines[0].chars, c->lines[0].length++);
    c->lines[0].chars[0] = '@';
    memmove(&c->lines[2].chars[1], c->lines[2].chars, c->lines[2].length++);
    c->lines[2].chars[0] = '+';

#ifdef debug_mode
    logger::debug("[postprocessor] done adding characters:");
    logger::debug(c->lines[0].chars);
    logger::debug(c->lines[1].chars);
    logger::debug(c->lines[2].chars);
    logger::debug(c->lines[3].chars);
    logger::debug("");
#endif
}
