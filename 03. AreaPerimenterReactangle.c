// The length and breadth are input through the keyboard. Write a program to calculate the area and perimeter of rectangle.

#include <stdio.h>

void main()
{
  // variable declaration
  int length, breadth, area, perimeter;

  // ask user for the length and breadth of rectangle
  printf("Enter the length and breadth of rectangle: \n");
  scanf("%d %d", &length, &breadth);

  // calculations
  area = length * breadth;            // Formula for area of rectangle is length * breadth
  perimeter = 2 * (length + breadth); // Formula for perimeter of rectangle is 2 * (length + breadth)

  // print the results
  printf("Area of rectangle with length %d and breadth %d is: %d\n", length, breadth, area);
  printf("Perimeter of rectangle with length %d and breadth %d is: %d\n", length, breadth, perimeter);
}