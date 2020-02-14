#include <Adafruit_NeoPixel.h>
#include <Wire.h>
#define NUM 48
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800);
void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
