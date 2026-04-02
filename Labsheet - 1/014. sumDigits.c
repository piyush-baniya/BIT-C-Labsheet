// if a five-digit number is entered through the keyboard. write a program to calculate the sum of its digits.

#include <stdio.h>

void main()
{
  // variable declaration
  int number, sum = 0, remainder;

  // ask user for a five digit number
  printf("Enter a five digit number: \n");
  scanf("%d", &number);

  // check if the number is five digits
  if (number < 10000 || number > 99999)
  {
    printf("Please enter a valid five digit number.\n");
    return;
  }

  // calculate the sum of digits
  while (number != 0)
  {
    remainder = number % 10; // Get the last digit
    sum += remainder;        // Add the last digit to the sum
    number /= 10;            // Remove the last digit from the original number
  }

  // print the result
  printf("Sum of the digits is: %d\n", sum);
}