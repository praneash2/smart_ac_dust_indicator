
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "" //removed for security purposes
#define BLYNK_DEVICE_NAME ""

#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_SPARKFUN_BLYNK_BOARD
//#define USE_NODE_MCU_BOARD
//#define USE_WITTY_CLOUD_BOARD
//#define USE_WEMOS_D1_MINI

#include "BlynkEdgent.h"

void setup()
{
  Serial.begin(115200);
  pinMode(D1,INPUT_PULLUP);
  delay(100);
  //digitalWrite(D0,1);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
  int mode=digitalRead(D1);
  //Serial.println(mode);
  if(mode==0){
    Blynk.virtualWrite(V0, 1);
    Serial.println("1");
    delay(100);
    }
  else{
    Blynk.virtualWrite(V0, 0);
    Serial.println("0");
    delay(100);
    }  
   // delay(500); 
}
