// write a program to calculate the surface area of cube

#include <stdio.h>

void main()
{
  // variable declaration
  int length, surfaceArea;

  // ask user for the length of cube
  printf("Enter the length of cube: \n");
  scanf("%d", &length);

  // calculation
  surfaceArea = 6 * length * length; // Formula for surface area of cube is 6 * length^2

  // print the result
  printf("Surface area of cube with length %d is: %d\n", length, surfaceArea);
}