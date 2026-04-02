// write a program that will convert temperature in Centigrade to Fahrenheit.

#include <stdio.h>

void main()
{
  // variable declaration
  float centigrade, fahrenheit;

  // ask user for the temperature in centigrade
  printf("Enter the temperature in Centigrade: \n");
  scanf("%f", &centigrade);

  // calculation
  fahrenheit = (centigrade * 9 / 5) + 32; // Formula to convert Centigrade to Fahrenheit is (C * 9/5) + 32

  // print the result
  printf("%.2f degrees Centigrade is equal to %.2f degrees Fahrenheit.\n", centigrade, fahrenheit);
}