// write a program to divide one number by another and find the quotient and remainder.

#include <stdio.h>

void main()
{
  // variable declaration
  int a, b, quotient, remainder;

  // ask user for the a and b
  printf("Enter the a and b: \n");
  scanf("%d %d", &a, &b);

  // calculations
  quotient = a / b;  // Division operator gives the quotient of a divided by b
  remainder = a % b; // Modulus operator gives the remainder of a divided by b

  // print the results
  printf("Quotient of %d divided by %d is: %d\n", a, b, quotient);
  printf("Remainder of %d divided by %d is: %d\n", a, b, remainder);
}