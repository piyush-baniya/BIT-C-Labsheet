// write a program that asks three coefficients of a quadratic equation and calculate its roots.

#include <stdio.h>

void main()
{
  // variable declaration
  float a, b, c, discriminant, root1, root2;

  // ask user for the coefficients of quadratic equation
  printf("Enter the coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0): \n");
  scanf("%f %f %f", &a, &b, &c);

  // calculate the discriminant
  discriminant = b * b - 4 * a * c;

  // check if the discriminant is positive, zero or negative
  if (discriminant > 0)
  {
    // two distinct real roots
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);
    printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
  }
  else if (discriminant == 0)
  {
    // one real root (double root)
    root1 = -b / (2 * a);
    printf("The roots are real and equal: %.2f\n", root1);
  }
  else
  {
    // complex roots
    float realPart = -b / (2 * a);
    float imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("The roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
  }
}