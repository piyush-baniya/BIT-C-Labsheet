// write a program to convert length from mm to km , m, cm and mm.

#include <stdio.h>

void main()
{
  // variable declaration
  float mm, lengthInKM, m, cm;

  // ask user for the length in mm
  printf("Enter the length in millimeters (mm): \n");
  scanf("%f", &mm);

  // calculations
  lengthInKM = mm / 1000000; // There are 1,000,000 millimeters in a kilometer
  m = mm / 1000;             // There are 1,000 millimeters in a meter
  cm = mm / 10;              // There are 10 millimeters in a centimeter

  // print the results
  printf("%.2f mm is equal to %.6f km, %.3f m and %.2f cm.\n", mm, lengthInKM, m, cm);
}