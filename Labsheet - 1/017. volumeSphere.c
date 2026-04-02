// write a program to ask the radius of sphere and calculate its volume.

#include <stdio.h>

void main()
{
  // variable declaration
  float radius, volume;

  // ask user for the radius of sphere
  printf("Enter the radius of sphere: \n");
  scanf("%f", &radius);

  // calculation
  volume = (4 / 3) * 3.14 * radius * radius * radius; // Formula for volume of sphere is (4/3) * π * r^3

  // print the result
  printf("Volume of sphere with radius %.2f is: %.2f\n", radius, volume);
}