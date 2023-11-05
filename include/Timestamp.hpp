#include <Arduino.h>
#include <time.h>

#ifndef TIMESTAMP_HPP
#define TIMESTAMP_HPP

class Timestamp {
    public:
    String getLocalTimeStamp();
};

#endif