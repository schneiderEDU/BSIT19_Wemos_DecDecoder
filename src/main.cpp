#include <Arduino.h>

int dec = 25;


String decToBin(int dec);

void setup() {
  Serial.begin(9600);
  Serial.printf("\ndec = %i", dec);
  Serial.print ("\nbin = ");
  Serial.println(decToBin(dec));
}

void loop() {
  
}

String decToBin (int dec) {
  String bin = "";
  int remain;
  while(dec > 0) {
    remain = dec%2;
    bin = remain + bin;
    dec = dec/2; 
  } 
  return bin;  
}