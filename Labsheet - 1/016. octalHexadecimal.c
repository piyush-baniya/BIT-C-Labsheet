// Enter a Number in decimal and print it in octal and hexadecimal.

#include <stdio.h>

void main()
{
  // variable declaration
  int Num;

  // ask user for a decimal Num
  printf("Enter a decimal Num: \n");
  scanf("%d", &Num);

  // print the Num in octal and hexadecimal
  printf("The Num %d in octal is: %o\n", Num, Num);       // %o format specifier is used to print octal representation
  printf("The Num %d in hexadecimal is: %x\n", Num, Num); // %x format specifier is used to print hexadecimal representation
}