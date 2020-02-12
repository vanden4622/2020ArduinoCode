#include <Adafruit_NeoPixel.h>
#define NUM 144
#define PIN 4
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM, PIN, NEO_GRB + NEO_KHZ800);
#define NUM2 5
#define PIN2 5
Adafruit_NeoPixel strip2 = Adafruit_NeoPixel(NUM2, PIN2, NEO_GRB + NEO_KHZ800);
int x=0;
int y=1;
int randompix;

void randomizer(){
  if(x==0){
  randompix=random(0, NUM);
  }
}
void fade(){
  for(int i=0; i<NUM; i++){
    strip.setPixelColor(i,x,0,0);
  }
  strip.setPixelColor(randompix,0,0,x);
  if(y==1){
  x++;
  if(x==255){
    y=0;
  }
}
else{
  x--;
  if(x==0){
    y=1;
  }
}
}
void ball(){
  for(int i=0; i<5; i++){
    strip2.setPixelColor(i,0,0,255);
  }
}

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
strip.begin();
strip.show();
strip2.begin();
strip2.show();
}

void loop() {
  // put your main code here, to run repeatedly:
randomizer();
fade();
ball();
strip.show();
strip2.show();

delay(.000002);
}
