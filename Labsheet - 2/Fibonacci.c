// write a program to generate the Fibonacci series up to a given number of terms.

#include <stdio.h>

void main()
{
  // variable declaration
  int n, a = 0, b = 1, nextTerm;

  // ask user for the number of terms
  printf("Enter the number of terms: \n");
  scanf("%d", &n);

  printf("Fibonacci Series: ");

  for (int i = 1; i <= n; i++)
  {
    printf("%d ", a); // Print the current term

    // Calculate the next term
    nextTerm = a + b;
    a = b;        // Update a to the current term
    b = nextTerm; // Update b to the next term
  }
}