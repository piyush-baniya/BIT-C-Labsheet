// write a program to print out all the Armstrong numbers between 1 and 500.

// An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <stdio.h>

void main()
{
  // variable declaration
  int num, originalNum, remainder, result;

  printf("Armstrong numbers between 1 and 500 are: \n");

  for (num = 1; num <= 500; num++)
  {
    originalNum = num;
    result = 0;

    while (originalNum != 0)
    {
      remainder = originalNum % 10;                // Get the last digit
      result += remainder * remainder * remainder; // Add the cube of the digit to the result
      originalNum /= 10;                           // Remove the last digit
    }

    if (result == num) // Check if the result is equal to the original number
    {
      printf("%d ", num); // Print the Armstrong number
    }
  }
}