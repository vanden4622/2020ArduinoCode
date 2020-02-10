#include <Adafruit_NeoPixel.h>

#define PINstrip1 4
#define PINstrip2 5
#define NUMstrip2 12
#define NUMstrip1 5
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(NUMstrip1, PINstrip1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(NUMstrip2, PINstrip2, NEO_GRB + NEO_KHZ800);
int i=0;
int x=0;
void strips(){
  strip1.setPixelColor(i,255,0,0);
  strip2.setPixelColor(x,0,0,255);
  strip1.show();
  strip2.show();
  delay(500);
  i++;
  x++;
}

void setup() {
  // put your setup code here, to run once:
  strip1.begin();
  strip2.begin();
  strip1.show();
  strip2.show(); // Initialize all pixels to 'off'
}

void loop() {
  // put your main code here, to run repeatedly:
  strips();
  if(x>NUMstrip2){
    x=0;
    strip2.clear();
  }
  if(i>NUMstrip1){
    i=0;
    strip1.clear();
  }
}
