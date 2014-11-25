// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 16x32 RGB LED matrix:
// http://www.adafruit.com/products/420

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

//#include <gamma.h>
//#include <Adafruit_GFX.h>   // Core graphics library
#include <GoodStuenPanel.h> // Hardware-specific library

#define R1 2
#define G1 3
#define B1 4
#define R2 5
#define G2 6
#define B2 7
#define CLK 8
#define OE  9
#define A   10
#define B   11
#define C   12
#define LAT 13

void setup() {
  Serial.begin(9600);

  GoodStuenPanel matrix(R1, G1, B1, R2, G2, B2, A, B, C, CLK, LAT, OE, false);

  // Testing interrupt - use LED
  //pinMode(13, OUTPUT); // LAT is also pin 13... so can't do this
  
  matrix.begin();
  
  matrix.drawPixel(0, 0, matrix.Color333(7, 7, 7));
  delay(2000);
  matrix.drawPixel(0, 0, matrix.Color333(7, 0, 0));
  delay(2000);
  matrix.drawPixel(0, 0, matrix.Color333(0, 7, 0));
  //matrix.fillRect(0, 0, 32, 16, matrix.Color333(0, 7, 0));

//  while(1) {
//    matrix.fillRect(0, 0, 32, 16, matrix.Color333(0, 7, 0));
//    delay(1000);
//    matrix.fillRect(0, 0, 32, 16, matrix.Color333(7, 0, 0));
//    delay(1000);
//    matrix.fillRect(0, 0, 32, 16, matrix.Color333(0, 0, 7));
//    delay(1000);
//  }
  
  // draw a pixel in solid white
  /*matrix.drawPixel(0, 0, matrix.Color333(7, 7, 7)); 
  delay(2000);

  // fix the screen with green
  matrix.fillRect(0, 0, 32, 16, matrix.Color333(0, 7, 0));
  delay(500);

  // draw a box in yellow
  matrix.drawRect(0, 0, 32, 16, matrix.Color333(7, 7, 0));
  delay(500);
  
  // draw an 'X' in red
  matrix.drawLine(0, 0, 31, 15, matrix.Color333(7, 0, 0));
  matrix.drawLine(31, 0, 0, 15, matrix.Color333(7, 0, 0));
  delay(500);
  
  // draw a blue circle
  matrix.drawCircle(7, 7, 7, matrix.Color333(0, 0, 7));
  delay(500);
  
  // fill a violet circle
  matrix.fillCircle(23, 7, 7, matrix.Color333(7, 0, 7));
  delay(500);
  
  // fill the screen with 'black'
  matrix.fillScreen(matrix.Color333(0, 0, 0));
  
  // draw some text!
  matrix.setCursor(1, 0);   // start at top left, with one pixel of spacing
  matrix.setTextSize(1);    // size 1 == 8 pixels high
  
  // print each letter with a rainbow color
  matrix.setTextColor(matrix.Color333(7,0,0));
  matrix.print('1');
  matrix.setTextColor(matrix.Color333(7,4,0)); 
  matrix.print('6');
  matrix.setTextColor(matrix.Color333(7,7,0));
  matrix.print('x');
  matrix.setTextColor(matrix.Color333(4,7,0)); 
  matrix.print('3');
  matrix.setTextColor(matrix.Color333(0,7,0));  
  matrix.print('2');
  
  matrix.setCursor(1, 9);   // next line
  matrix.setTextColor(matrix.Color333(0,7,7)); 
  matrix.print('*');
  matrix.setTextColor(matrix.Color333(0,4,7)); 
  matrix.print('R');
  matrix.setTextColor(matrix.Color333(0,0,7));
  matrix.print('G');
  matrix.setTextColor(matrix.Color333(4,0,7)); 
  matrix.print("B");
  matrix.setTextColor(matrix.Color333(7,0,4)); 
  matrix.print("*");
*/
  // whew!
}

void loop() {
  // do nothing
}
