#include <Adafruit_NeoPixel.h>

#define PIN 3
// ra ra rasputin russia's greatest love machine 
//DSAINT 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(38, PIN, NEO_GRB + NEO_KHZ800);

int(enforcerBlueNum) = 4;
int(enforcerGoldNum) = 2;
int(enforcerRedNum) = 0;
int(enforcerGreenNum) = 3;
int(enforcerPurpleNum) = 5;
int(enforcerOrangeNum) = 1;
int(enforcerPinkNum) = 6;
int(enforcerBlackNum) = 7;


void enforcersColorsFlashing ()
{
  //enforcerBlueNum = enforcerBlueNum;
  //enforcerGoldNum = enforcerGoldNum;
  //enforcerRedNum = enforcerRedNum;
  //enforcerGreenNum = enforcerGreenNum;
  //enforcerPurpleNum = enforcerPurpleNum;
  //enforcerOrangeNum = enforcerOrangeNum; 
  //enforcerPinkNum = enforcerPinkNum;
  //enforcerBlackNum = enforcerBlackNum;
 
  strip.setPixelColor(enforcerBlueNum, 15,8,56);
  strip.setPixelColor(enforcerGoldNum, 255,208,0);
  strip.setPixelColor(enforcerRedNum, 184,15,10);
  strip.setPixelColor(enforcerGreenNum, 11,255,25);
  strip.setPixelColor(enforcerPurpleNum, 199,21,133);
  strip.setPixelColor(enforcerOrangeNum, 255,140,0);
  strip.setPixelColor(enforcerPinkNum, 217,33,33);
  strip.setPixelColor(enforcerBlackNum, 100,100,100);
 
  strip.show();
  delay(500);

  strip.setPixelColor(enforcerBlueNum, 0,0,0);
  strip.setPixelColor(enforcerGoldNum, 0,0,0);
  strip.setPixelColor(enforcerRedNum, 0,0,0);
  strip.setPixelColor(enforcerGreenNum, 0,0,0);
  strip.setPixelColor(enforcerPurpleNum, 0,0,0);
  strip.setPixelColor(enforcerOrangeNum, 0,0,0);
  strip.setPixelColor(enforcerPinkNum, 0,0,0);
  strip.setPixelColor(enforcerBlackNum, 0,0,0);

  enforcerBlueNum++;
  enforcerGoldNum++;  
  enforcerRedNum++;
  enforcerGreenNum++;
  enforcerPurpleNum++;
  enforcerOrangeNum++;
  enforcerPinkNum++;
  enforcerBlackNum++;
  
  if (enforcerBlueNum == 38){

    enforcerBlueNum = 0;
  }

  if (enforcerGoldNum == 38){

    enforcerGoldNum = 0;
  }

  if (enforcerRedNum == 38){

    enforcerRedNum = 0; 
  }

  if (enforcerGreenNum == 38){

    enforcerGreenNum = 0;
  }

  if (enforcerPurpleNum == 38){

    enforcerPurpleNum = 0;

  }

  if (enforcerOrangeNum == 38){

    enforcerOrangeNum = 0;
  }


  if (enforcerPinkNum == 38){

    enforcerPinkNum = 0;
  }

  if (enforcerBlackNum == 38){
    
    enforcerBlackNum = 0;
    
  }
}

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'

}
//dsaint
void loop() {
  // put your main code here, to run repeatedly:
       
  enforcersColorsFlashing();
}
