// write a program to generate from 9 to 0 using while statement.

#include <stdio.h>

void main()
{
  // variable declaration
  int i = 9; // Initialize the counter variable

  printf("Numbers from 9 to 0: \n");

  while (i >= 0) // Loop until i is greater than or equal to 0
  {
    printf("%d ", i); // Print the current value of i
    i--;              // Decrement the counter variable
  }
}