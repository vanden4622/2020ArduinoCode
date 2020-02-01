#include <Adafruit_NeoPixel.h>

#define PIN 4
#define NUMPIXELS 24
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t enforcerYellow = strip.Color(255, 154, 0);
uint32_t enforcerBlue = strip.Color(0, 0, 108);
uint32_t ivory = strip.Color(255, 255, 240);
uint32_t lime = strip.Color(0, 205, 0);
int lightNum = 0;

void alternateColorsByStratum(){
  int stripPattern[24] = {0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3,0,1,2,3};

  for(int stratum = 0; stratum < 24; stratum++){
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

void switchEnforcerColors(){
  /*  boolean functioning = true;
    if(functioning == true){
        strip.setPixelColor(lightNum, enforcerYellow);
        delay(255);
        functioning = false;
    }
    else{
        strip.setPixelColor(lightNum, enforcerBlue);
        delay(255);
        functioning = true; 
    }
    */
    for(int i=0; i<NUMPIXELS; i++){
      strip.setPixelColor(i,enforcerYellow);
    }
    strip.show();
    delay(500);
    for(int i=0; i<NUMPIXELS; i++){
      strip.setPixelColor(i, enforcerBlue);
    }
    strip.show();
    delay(500);
}


void g(){
  
  }

void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(15);
strip.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  //alternateColorsByStratum();
  //strip.show();
  //delay(255);

  switchEnforcerColors();
  strip.show();
  delay(500);
  lightNum++;
  if (lightNum > 24)
    lightNum = 0;
}
