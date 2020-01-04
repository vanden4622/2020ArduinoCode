#include <Adafruit_NeoPixel.h>

#define PIN 3
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(38, PIN, NEO_GRB + NEO_KHZ800);
int i=0;
void rambowstatic(){
while(i<38)
{
  strip.setPixelColor(i,255,0,0);
  i++;
  strip.setPixelColor(i,255,102,0);
  i++;
  strip.setPixelColor(i,255,255,0);
  i++;
  strip.setPixelColor(i,0,255,0);
  i++;
  strip.setPixelColor(i,0,0,255);
  i++;
  strip.setPixelColor(i,75,0,130);
  i++;
  strip.setPixelColor(i,148,0,211);
  i++;
}
}

//void showColor()
//{

//}


void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}

void loop() {
  // put your main code here, to run repeatedly:
rambowstatic();
strip.show();
delay(1000);

}
