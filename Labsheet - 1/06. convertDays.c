// write a program to convert days to years, weeks and days.

#include <stdio.h>

void main()
{
  // variable declaration
  int totalDays, years, weeks, days;

  // ask user for the total days
  printf("Enter the total days: \n");
  scanf("%d", &totalDays);

  // calculations
  years = totalDays / 365;       // There are 365 days in a year
  weeks = (totalDays % 365) / 7; // Remaining days after extracting years, divided by 7 gives weeks
  days = totalDays % 7;          // Remaining days after extracting years and weeks

  // print the results
  printf("%d days is equal to %d years, %d weeks and %d days.\n", totalDays, years, weeks, days);
}