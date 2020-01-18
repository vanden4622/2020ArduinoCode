#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>
#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>
#include <gamma.h>
#define PIN 4
#define NUMPIXELS 256

Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(16, 16, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t enforceyellow=matrix.Color(253,209,9);
uint32_t enforceblue=matrix.Color(18,14,56);

void face(){
  int logo[16][16]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0},
{0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,0},
{0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0},
{0,1,1,1,1,0,0,0,0,0,0,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0},
{0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  };
   for(int row = 0; row < 16; row++) {
    for(int column = 0; column < 16; column++) {
     if(logo[row][column] == 1) {
       matrix.drawPixel(row,column,enforceyellow);
     }
   }
  }
  }

 void wink(){
  int logo[16][16]={
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0},
{0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,0},
{0,1,0,1,1,1,0,0,0,0,1,1,1,0,1,0},
{0,1,1,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,0,0,0,0,1,1,0},
{0,1,1,1,1,0,0,0,0,0,0,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0},
{0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
  };
   for(int row = 0; row < 16; row++) {
    for(int column = 0; column < 16; column++) {
     if(logo[row][column] == 1) {
       matrix.drawPixel(row,column,enforceyellow);
     }
   }
  }
  }


void setup() {
  // put your setup code here, to run once:
matrix.begin();
matrix.clear();
strip.begin();
strip.clear();
matrix.setBrightness(40);
matrix.show();
}

void loop() {
  // put your main code here, to run repeatedly:
matrix.fillScreen(enforceblue);
face();
matrix.show();
delay(1000);
wink();
matrix.show();
delay(1000);
}
