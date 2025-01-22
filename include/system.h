#ifndef SYSTEM_H
#define SYSTEM_H

#include <Arduino.h>
#include "command.h"

struct IO_PIN{
    uint8_t pin;
    PinConfig mode;
    int value;
};

class System{

};

#endif