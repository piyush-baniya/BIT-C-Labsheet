// write a program to calculate the area and circumferenec of circle

#include <stdio.h>

void main()
{
  // variable declaration
  float radius, area, circumference;

  // ask user for the radius of circle
  printf("Enter the radius of circle: \n");
  scanf("%f", &radius);

  // calculations
  area = 3.14 * radius * radius;     // Formula for area of circle is π * r^2
  circumference = 2 * 3.14 * radius; // Formula for circumference of circle is 2 * π * r

  // print the results
  printf("Area of circle with radius %.2f is: %.2f\n", radius, area);
  printf("Circumference of circle with radius %.2f is: %.2f\n", radius, circumference);
}