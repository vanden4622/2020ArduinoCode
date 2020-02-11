#include <Adafruit_NeoPixel.h>

#define PIN 4

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIN, NEO_GRB + NEO_KHZ800);

int(enforcerBlueNum) = 0;
int(enforcerGoldNum) = 1;
int(swRed) = 0;
int(swBlue) = 1;
int loopCounter = 0;

void starWarsColorsFlashing() {
  if(loopCounter % 2 == 0){
    strip.setPixelColor(loopCounter, 0, 35, 102);
    loopCounter++;
    delay(255);
  }
  else {
    strip.setPixelColor(loopCounter, 255, 0, 0);
    loopCounter++;
    delay(255);
  }

}

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show(); //Initialize all pixels to 'off'
}

void loop() {
  // put your main code here, to run repeatedly:
strip.setPixelColor(1,255,255,255);
strip.show();
}
