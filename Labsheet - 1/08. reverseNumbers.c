// write a program to input three digit number and reverse the number.

#include <stdio.h>

void main()
{
  // variable declaration
  int number, reversedNumber = 0, remainder;

  // ask user for a three digit number
  printf("Enter a three digit number: \n");
  scanf("%d", &number);

  // check if the number is three digits
  if (number < 100 || number > 999)
  {
    printf("Please enter a valid three digit number.\n");
    return;
  }

  // reverse the number
  while (number != 0)
  {
    remainder = number % 10;                          // Get the last digit
    reversedNumber = reversedNumber * 10 + remainder; // Append the last digit to the reversed number
    number /= 10;                                     // Remove the last digit from the original number
  }

  // print the reversed number
  printf("Reversed number is: %d\n", reversedNumber);
}