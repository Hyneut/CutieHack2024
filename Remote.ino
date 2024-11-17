#include <IRremote.hpp>
const int IR = 2;
const int DATA = 3;
IRrecv irrecv(IR);

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR, ENABLE_LED_FEEDBACK);
  pinMode(DATA, OUTPUT);
}

void loop() {
  
  if (IrReceiver.decode()) {
    //Serial.print(IrReceiver.decodedIRData.decodedRawData);
    
    if (IrReceiver.decodedIRData.decodedRawData == 0x0E916FF00) {
      Serial.println("0");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0F30CFF00) {
      Serial.println("1");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0E718FF00) {
      Serial.println("2");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0A15EFF00) {
      Serial.println("3");
      delay(1000);

    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0F708FF00) {
      Serial.println("4");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0E31CFF00) {
      Serial.println("5");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0A55AFF00) {
      Serial.println("6");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0BD42FF00) {
      Serial.println("7");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0xAD52FF00) {
      Serial.println("8");
      delay(1000);
    }

    if (IrReceiver.decodedIRData.decodedRawData == 0x0B54AFF00) {
      Serial.println("9");
      delay(1000);
    }


    IrReceiver.resume(); 
  }
}
