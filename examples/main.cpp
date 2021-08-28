#include <Arduino.h>
#include <bufferCircular.h>

Buffer queue = Buffer(10);

void setup(){
    Serial.begin(115200);
}

void loop(){
    for(int i=0; i<10; i++){
        Serial.println("Hello World");
        delay(500);
    }
}
