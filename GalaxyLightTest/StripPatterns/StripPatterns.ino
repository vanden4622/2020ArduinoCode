#include <Adafruit_NeoPixel.h>


#define PIN 4
#define NUMPIXELS 256
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t enforcerYellow = strip.Color(255, 191, 0);
uint32_t enforcerBlue = strip.Color(0, 0, 128);
uint32_t ivory = strip.Color(255, 255, 240);
uint32_t lime = strip.Color(0, 205, 0);

void alternateColorsByStratum(){
  int stripPattern[16] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};

  for(int stratum = 0; stratum < 16; stratum++){
    if(stripPattern[stratum] == 0){
      strip.setPixelColor(stratum, enforcerYellow);
    }
    else if(stripPattern[stratum] == 1){
      strip.setPixelColor(stratum, enforcerBlue);
    }
    else if(stripPattern[stratum] == 2){
      strip.setPixelColor(stratum, ivory);
    }
    else if(stripPattern[stratum] == 3){
      strip.setPixelColor(stratum, lime);
    }
    
  }
  
  
}

void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(35);
strip.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  alternateColorsByStratum();
  strip.show();
  delay(255);
}
