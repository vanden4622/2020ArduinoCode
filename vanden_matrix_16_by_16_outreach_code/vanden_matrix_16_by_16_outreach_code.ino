#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>
#include <Adafruit_NeoPixel.h>
#include <Adafruit_NeoMatrix.h>
#include <gamma.h>
#define PIN 4
#define NUMPIXELS 256
char var;
int color;
int screen;
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(16, 16, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t enforceyellow=matrix.Color(253,209,9);
uint32_t enforceblue=matrix.Color(18,14,56);
uint32_t lightsaberblue=matrix.Color(31,235,253);
uint32_t lightsaberred=matrix.Color(206,12,44);
uint32_t lightsaberhilt=matrix.Color(100,100,100);
uint32_t black=matrix.Color(0,0,0);
uint32_t clash=matrix.Color(255,255,255);

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
          if(logo[row][column] ==0 ) {
       matrix.drawPixel(row,column,enforceblue);
     }
   }
  }
  }

 void wink(){
  int logo[16][16]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0},
{0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0},
{0,1,0,1,1,1,0,0,0,0,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0},
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
      if(logo[row][column] == 0) {
       matrix.drawPixel(row,column,enforceblue);
     }
   }
  }
  }
   void lightsaber(){
  int logo[16][16]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{2,2,0,0,0,0,0,0,0,0,0,0,0,0,1,1},
{1,1,0,0,0,0,0,0,0,0,0,0,0,0,2,2},
{3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3},
{3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3},
{3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3},
  };
   for(int row = 0; row < 16; row++) {
    for(int column = 0; column < 16; column++) {
     if(logo[row][column] == 1) {
       matrix.drawPixel(row,column,lightsaberblue);
     }
      if(logo[row][column] == 0) {
       matrix.drawPixel(row,column,black);
     }
      if(logo[row][column] == 2) {
       matrix.drawPixel(row,column,lightsaberred);
     }
      if(logo[row][column] == 3) {
       matrix.drawPixel(row,column,lightsaberhilt);
     }
   }
  }
  }
     void lightsaberclashing(){
  int logo[16][16]={
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,0,0,0,0,2,2,0},
{0,2,2,2,0,4,0,0,0,0,0,0,1,1,1,0},
{0,0,1,1,1,0,0,0,0,0,0,2,2,2,0,0},
{0,0,0,2,2,2,0,0,0,0,1,1,1,0,0,0},
{0,0,0,0,1,1,1,0,4,2,2,2,0,0,0,0},
{0,0,0,0,0,2,4,4,4,1,1,0,0,0,0,0},
{0,0,0,4,0,4,4,4,4,4,4,0,0,0,0,0},
{0,4,0,0,0,0,4,4,4,4,0,0,0,0,0,0},
{0,0,0,0,0,2,2,4,4,1,1,0,0,0,0,0},
{0,0,0,0,1,1,1,4,0,2,2,2,0,0,0,0},
{0,0,0,2,2,2,0,0,0,0,1,1,1,0,0,0},
{0,0,1,1,1,0,0,0,4,0,0,2,2,2,0,0},
{0,3,3,2,0,0,0,0,0,0,0,0,1,3,3,0},
{3,3,3,0,0,0,0,0,0,0,0,0,0,3,3,3},
{3,3,0,0,0,0,0,0,0,0,0,0,0,0,3,3},
  };
   for(int row = 0; row < 16; row++) {
    for(int column = 0; column < 16; column++) {
     if(logo[row][column] == 1) {
       matrix.drawPixel(row,column,lightsaberblue);
     }
      if(logo[row][column] == 0) {
       matrix.drawPixel(row,column,black);
     }
      if(logo[row][column] == 2) {
       matrix.drawPixel(row,column,lightsaberred);
     }
      if(logo[row][column] == 3) {
       matrix.drawPixel(row,column,lightsaberhilt);
     }
      if(logo[row][column] == 4) {
       matrix.drawPixel(row,column,clash);
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
matrix.setBrightness(50);
matrix.show();
Serial.begin(9600);
color=0;
screen=0;
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() >0){
var=Serial.read();
if(var=='e'){
  screen++;
}
if(screen & 0x01){
  lightsaber();
  matrix.show();
  if(var=='x'){
    lightsaberclashing();
    matrix.show();
    delay(500);
}
}
if(screen % 2 == 0){
face();
matrix.show();
if(var=='q'){
  color++;
  if(color % 2 == 0){
    enforceblue=matrix.Color(18,14,56);
  }
    if (color & 0x01){
    enforceblue=matrix.Color(255,0,0);
  }
}
if(var=='a'){
  Serial.println("winking");
  wink();
  matrix.show();
  delay(500);
  Serial.println("winking complete");
}
}
}
}
