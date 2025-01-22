#include "driver.h"
#include "config.h"

Driver::Driver(const int baudRate){
    Serial.begin(baudRate);
}

void Driver::run(){
    if (Serial.available()){
        
    }
}