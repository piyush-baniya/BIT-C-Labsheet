// write a program to read three sides of a triangle and calculate its area.

#include <stdio.h>

void main()
{
  // variable declaration
  float side1, side2, side3, area, s;

  // ask user for the sides of triangle
  printf("Enter the three sides of triangle: \n");
  scanf("%f %f %f", &side1, &side2, &side3);

  // calculate the semi-perimeter
  s = (side1 + side2 + side3) / 2;

  // calculate the area using Heron's formula
  area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula for area of triangle

  // print the result
  printf("Area of triangle with sides %.2f, %.2f and %.2f is: %.2f\n", side1, side2, side3, area);
}