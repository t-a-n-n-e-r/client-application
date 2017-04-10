//
// Created by Tanner on 1/17/17.
//

#ifndef CLIENT_APPLICATION_FPGA_H
#define CLIENT_APPLICATION_FPGA_H

#include "logger.h"
#include "types.h"

class fpga {
public:
    void compress_sequence_data(struct line * data);
    void decompress_sequence_data(struct line * data);

    void compress_quality_score_data(struct line * data);
    void decompress_quality_score_data(struct line * data);
};


#endif //CLIENT_APPLICATION_FPGA_H
