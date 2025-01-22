#include <Arduino.h>
#include "driver.h"

void setup() {
  // put your setup code here, to run once:
  theNodeMCU = new Driver();
}

void loop() {
  // put your main code here, to run repeatedly:
  theNodeMCU->run();
}
