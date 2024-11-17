#include "Keyboard.h"


void setup() {
  Serial.begin(9600);  // Start serial communication
  Serial1.begin(9600); // If using another serial port (e.g., Serial1 on Mega)
  Keyboard.begin();
}

void loop() {
  if (Serial.available()) {
    char received = Serial.read();  // Read incoming data
    // Serial.print(received);                // Print the received data

    Serial.print(received);  
    delay(100);

  //  }
  }
}