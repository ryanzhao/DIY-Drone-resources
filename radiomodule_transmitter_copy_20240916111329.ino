
#include <SPI.h>
#include "printf.h"
#include "RF24.h"


// instantiate an object for the nRF24L01 transceiver
RF24 radio(3, 2);


void setup() {

  Serial.begin(9600);
  while (!Serial) {
    // some boards need to wait to ensure access to serial over USB
  }

  // initialize the transceiver on the SPI bus
  if (!radio.begin()) {
    Serial.println(F("radio hardware is not responding!!"));
    while (1) {}  // hold in infinite loop
  }
  else
  {
    Serial.println("You are ready to go!!!");
  }

  
} 
void loop() 
{}
