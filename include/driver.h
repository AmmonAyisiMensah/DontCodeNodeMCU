#ifndef DRIVER_H
#define DRIVER_H

#include "system.h"
// The one and only NodeMCU instance
Driver *theNodeMCU;

class Driver{
public:
    Driver(const int baudRate = 9600);
    void run();
private:

};

#endif