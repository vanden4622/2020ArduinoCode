#include <Adafruit_NeoPixel.h>

#define PIN 5

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
<<<<<<< Updated upstream
Adafruit_NeoPixel strip = Adafruit_NeoPixel(100, PIN, NEO_GRB + NEO_KHZ800);
=======
Adafruit_NeoPixel strip = Adafruit_NeoPixel(256, PIN, NEO_GRB + NEO_KHZ800);
>>>>>>> Stashed changes

int(enforcerBlueNum) = 0;
int(enforcerGoldNum) = 1;
int(swRed) = 0;
int(swBlue) = 1;
int loopCounter = 0;

void starWarsColorsFlashing() {
<<<<<<< Updated upstream

  if(loopCounter % 2 == 0){
      strip.setPixelColor(swBlue, 25, 143, 229);
      loopCounter++;
      delay(257);
  }
  else{
      strip.setPixelColor(swRed, 255, 0, 0);
      loopCounter++;
      delay(257);
  }
  
=======
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

>>>>>>> Stashed changes
}

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.setBrightness(45);
  strip.show(); //Initialize all pixels to 'off'
}

void loop() {
  // put your main code here, to run repeatedly:
<<<<<<< Updated upstream
  if(loopCounter < 100){
=======
  if (loopCounter < 256){
>>>>>>> Stashed changes
  starWarsColorsFlashing();
  }
  strip.show();
  }
}
