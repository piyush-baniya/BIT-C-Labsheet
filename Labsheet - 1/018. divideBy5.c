// write a program that ask a number and divide it by 5 and print the remainder.

#include <stdio.h>

void main()
{
  // variable declaration
  int number, remainder;

  // ask user for a number
  printf("Enter a number: \n");
  scanf("%d", &number);

  // calculation
  remainder = number % 5;

  // print the remainder
  printf("The remainder when %d is divided by 5 is: %d\n", number, remainder);
}