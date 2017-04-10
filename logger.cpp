//
// Created by Tanner on 1/17/17.
//

#include "logger.h"

log_level level = normal;

void log_internal(string s, log_level threshold) {
    if(level >= threshold) {
        cout << s << endl;
    }
}

void logger::log(string s) {
    log_internal(s, log_level::normal);
}

void logger::debug(string s) {
    log_internal(s, log_level::debug);
}

void logger::set_level(log_level l) {
    level = l;
}