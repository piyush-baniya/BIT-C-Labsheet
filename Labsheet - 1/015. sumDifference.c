// Two numbers are entered through the keyboard and if the first number is greater than the second number then print the sum of number otherwise print the difference of number ( use tannery operator).

#include <stdio.h>

void main()
{
  // variable declaration
  int num1, num2, result;

  // ask user for two numbers
  printf("Enter the first number: \n");
  scanf("%d", &num1);
  printf("Enter the second number: \n");
  scanf("%d", &num2);

  // use ternary operator to calculate the result based on the condition
  result = (num1 > num2) ? (num1 + num2) : (num1 - num2); // If num1 is greater than num2, calculate the sum; otherwise, calculate the difference

  // print the result
  printf("The result is: %d\n", result);
}