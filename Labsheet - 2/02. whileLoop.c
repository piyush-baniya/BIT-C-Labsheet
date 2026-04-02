// write a program to generate numbers from 1 to 10 using while statement.

#include <stdio.h>

void main()
{
  // variable declaration
  int i = 1; // Initialize the counter variable

  printf("Numbers from 1 to 10: \n");

  while (i <= 10) // Loop until i is less than or equal to 10
  {
    printf("%d ", i); // Print the current value of i
    i++;              // Increment the counter variable
  }
}