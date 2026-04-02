// Write a program to find addition, subtraction, multiplication and division of two numbers entered by the user.

#include <stdio.h>

void main()
{
  // variable declaration
  int a, b, sum, sub, mul;
  float div;

  // ask user for any two numbers
  printf("Enter any two numbers: \n");
  scanf("%d %d", &a, &b);

  // calculations
  sum = a + b;
  sub = a - b;
  mul = a * b;
  div = a / b;

  // print the results
  printf("Sum of %d and %d is: %d\n", a, b, sum);
  printf("Subtraction of %d and %d is: %d\n", a, b, sub);
  printf("Multiplication of %d and %d is: %d\n", a, b, mul);
  printf("Division of %d and %d is: %.2f\n", a, b, div);
}