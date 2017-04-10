//
// Created by Tanner on 1/17/17.
//

#ifndef CLIENT_APPLICATION_TYPES_H
#define CLIENT_APPLICATION_TYPES_H

#include <string>

using namespace std;

struct line {
    char * chars;
    int length;
};

struct chunk {
    struct line lines[4];
};

#endif //CLIENT_APPLICATION_TYPES_H
