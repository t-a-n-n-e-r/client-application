//
// Created by Tanner on 1/17/17.
//

#ifndef CLIENT_APPLICATION_PREPROCESSOR_H
#define CLIENT_APPLICATION_PREPROCESSOR_H

#include "logger.h"
#include "types.h"

class preprocessor {
public:
    struct line * extract_sequence_data(struct chunk *);
    struct line * extract_quality_scores(struct chunk *);
    void remove_unncessary_data(struct chunk *);
};


#endif //CLIENT_APPLICATION_PREPROCESSOR_H
