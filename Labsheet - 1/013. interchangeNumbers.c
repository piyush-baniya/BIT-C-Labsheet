// Two numbers are input through the keyboard. Write a program to interchange its contents.

#include <stdio.h>

void main()
{
  // variable declaration
  int num1, num2, temp;

  // ask user for two numbers
  printf("Enter the first number: \n");
  scanf("%d", &num1);
  printf("Enter the second number: \n");
  scanf("%d", &num2);

  // interchange the contents of num1 and num2 using a temporary variable
  temp = num1; // Store the value of num1 in temp
  num1 = num2; // Assign the value of num2 to num1
  num2 = temp; // Assign the value stored in temp (original num1) to num2

  // print the results after interchange
  printf("After interchange, first number is: %d\n", num1);
  printf("After interchange, second number is: %d\n", num2);
}
