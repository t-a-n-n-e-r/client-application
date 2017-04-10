//
// Created by Tanner on 1/17/17.
//

#ifndef CLIENT_APPLICATION_CLIENT_H
#define CLIENT_APPLICATION_CLIENT_H

#include <iostream>
#include <fstream>
#include <string>

#include "types.h"
#include "logger.h"
#include "preprocessor.h"
#include "postprocessor.h"
#include "fpga.h"

using namespace std;

enum mode {
    compress, decompress, help, not_set
};

class client {
public:
    void execute(int argc, char * argv[]);
};


#endif //CLIENT_APPLICATION_CLIENT_H
