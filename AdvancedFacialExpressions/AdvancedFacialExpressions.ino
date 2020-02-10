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
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(12, 12, PIN,
  NEO_MATRIX_TOP     + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
uint32_t enforcerYellow = matrix.Color(253, 209, 9);
uint32_t enforcerBlue = matrix.Color(18, 14, 56);
uint32_t vermillionRed = matrix.Color(31, 235, 253);
uint32_t darkRed = matrix.Color(204, 0, 0);
uint32_t skyBlue = matrix.Color(0, 170, 255);
uint32_t black = matrix.Color(0, 0, 0);

void natural(){
  int face[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,0,0,1,0,0,1,0,0,1,0},
{0,1,0,1,1,0,0,1,1,0,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
      }
    }
  
  }

void wink(){
  int wink[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,1,0,0,1,0},
{0,0,0,0,0,0,0,1,1,0,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,0,0,0,0,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,1,1,1,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(wink[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(wink[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
      }
    }
  
  }

void frown(){
  int frown[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,0,0,1,0,0,1,0,0,1,0},
{0,1,0,1,1,0,0,1,1,0,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,1,1,0,0,0,0},
{0,0,1,1,1,1,1,1,1,1,0,0},
{0,1,1,0,0,0,0,0,0,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(frown[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(frown[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
      }
    }
  
  }

void beautiful(){
  int heartEyes[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,2,0,2,0,0,0,0,2,0,2,0},
{2,2,2,2,2,0,0,2,2,2,2,2},
{0,2,2,2,0,0,0,0,2,2,2,0},
{0,0,2,0,0,0,0,0,0,2,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{1,1,1,1,1,1,1,1,1,1,1,1},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,1,1,1,1,1,1,1,1,0,0},
{0,0,0,1,1,1,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(heartEyes[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
      }
      if(heartEyes[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
      }
      if(heartEyes[row][column] == 2){
          matrix.drawPixel(row, column, vermillionRed);
      }
      
      }
    }
  
  }

void crossEyes(){
int face[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,1,0,0,0,0,1,0,1,0},
{0,0,1,0,0,0,0,0,0,1,0,0},
{0,1,0,1,0,0,0,0,1,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,0,0,0,0,1,1,1,0},
{0,0,1,1,1,1,1,1,1,1,0,0},
{0,0,0,1,1,1,1,1,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
      }
    }
  
  }

void openFace(){
int face[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,0,0,1,0,0,1,0,0,1,0},
{0,1,0,1,1,0,0,1,1,0,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,2,2,2,2,0,0,0,0},
{0,0,0,0,2,2,2,2,0,0,0,0},
{0,0,0,0,0,2,2,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
        }
        if(face[row][column] == 2){
          matrix.drawPixel(row, column, black);
        }
      }
    }
  
  }

void faceWithHalo(){
int face[12][12] = {
{2,2,2,2,2,2,2,2,2,2,2,2},
{2,0,0,0,0,0,0,0,0,0,0,2},
{2,2,2,2,2,2,2,2,2,2,2,2},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,1,0,0,0,0,1,1,0,0},
{0,1,0,0,1,0,0,1,0,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,0,0,0,0,0,0,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,1,1,1,1,1,1,1,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
        }
        if(face[row][column] == 2){
          matrix.drawPixel(row, column, skyBlue);
        }
      }
    }
  
  }

void rollingEyes(){
int face[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,0,0,1,0,0,1,0,0,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,1,1,1,1,0,0,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
      }
    }
  
  }

void faceWithGlasses(){
int face[12][12] = {
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,2,2,2,2,0,0,2,2,2,2,0},
{2,2,0,0,2,2,2,2,0,0,2,2},
{2,2,0,1,2,2,2,2,1,0,2,2},
{0,2,2,2,2,0,0,2,2,2,2,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,1,1,0,0,0,0,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,1,1,1,1,1,1,1,1,1,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0},
  };

  for(int row = 0; row < 12; row++){
    for(int column = 0; column < 12; column++){
      if(face[row][column] == 1){
        matrix.drawPixel(row, column, enforcerYellow);
        }
        if(face[row][column] == 0){
          matrix.drawPixel(row, column, enforcerBlue);
          }
        if(face[row][column] == 2){
          matrix.drawPixel(row, column, darkRed);
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
matrix.setBrightness(45);
matrix.show();
Serial.begin(9600);
color=0;
screen=0;
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available() >0){
var=Serial.read();
if(var=='w'){
  screen++;
}
if(screen & 0x01){
  natural();
  matrix.show();
  if(var=='e'){
  //lightsaberclashing();
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
