#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

Adafruit_SSD1306 oled(128, 32, &Wire, -1);

void garis(int x1, int x2, int y){
  while(x1 <= x2){
    x1++;
    x2--;
    oled.drawPixel(x1, y, WHITE);
    oled.drawPixel(x2, y, WHITE);
    oled.display();
  }
}

void subjek(int x,int y){
  oled.drawLine(x+1, y+6, x+1, y+8, WHITE);
  oled.drawLine(x+2, y+8, x+2, y+10, WHITE);
  oled.drawLine(x+3, y+9, x+3, y+11, WHITE);
  oled.drawLine(x+4, y+9, x+4, y+15, WHITE);
  oled.drawLine(x+5, y+8, x+5, y+13, WHITE);
  oled.drawPixel(x+5, y+15, WHITE);
  oled.drawLine(x+6, y+7, x+6, y+12, WHITE);
  oled.drawLine(x+7, y+6, x+7, y+15, WHITE);
  oled.drawLine(x+8, y+2, x+8, y+12, WHITE);
  oled.drawPixel(x+8, y+15, WHITE);
  oled.drawLine(x+9, y+1, x+9, y+10, WHITE);
  oled.drawLine(x+10, y+1, x+10, y+9, WHITE);
  oled.drawLine(x+11, y+1, x+11, y+5, WHITE);
  oled.drawPixel(x+11, y+8, WHITE);
  oled.drawLine(x+12, y+1, x+12, y+5, WHITE);
  oled.drawPixel(x+12, y+9, WHITE);
  oled.drawLine(x+13, y+2, x+13, y+4, WHITE);
  oled.drawLine(x+14, y+2, x+14, y+4, WHITE);
  oled.display();
}

void objek(int x,int y){
  oled.drawLine(x+4, y+5, x+4, y+8, WHITE);
  oled.drawLine(x+5, y+7, x+5, y+9, WHITE);
  oled.drawLine(x+6, y+8, x+6, y+9, WHITE);
  oled.drawLine(x+7, y+2, x+7, y+15, WHITE);
  oled.drawLine(x+8, y+3, x+8, y+15, WHITE);
  oled.drawLine(x+9, y+10, x+9, y+12, WHITE);
  oled.drawLine(x+10, y+4, x+10, y+12, WHITE);
  oled.drawLine(x+11, y+3, x+11, y+11, WHITE);
  oled.display();
}

void setup(){
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.clearDisplay();

}

void loop(){
  garis(0, 128, 30);
  subjek(10, 15);
  objek(50, 15);
}



