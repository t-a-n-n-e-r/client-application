//
// Created by Tanner on 1/17/17.
//

#ifndef CLIENT_APPLICATION_LOGGER_H
#define CLIENT_APPLICATION_LOGGER_H

#define debug_mode

#include <string>
#include <iostream>

using namespace std;

enum log_level {
    normal, debug
};

class logger {
public:
    static void log(string);
    static void debug(string);
    static void set_level(log_level);
};


#endif //CLIENT_APPLICATION_LOGGER_H
