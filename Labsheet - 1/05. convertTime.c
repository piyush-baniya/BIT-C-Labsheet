// write a program to convert time in seconds to hours, minutes and seconds.

#include <stdio.h>

void main()
{
  // variable declaration
  int totalSeconds, hours, minutes, seconds;

  // ask user for the total seconds
  printf("Enter the total seconds: \n");
  scanf("%d", &totalSeconds);

  // calculations
  hours = totalSeconds / 3600;          // There are 3600 seconds in an hour
  minutes = (totalSeconds % 3600) / 60; // Remaining seconds after extracting hours, divided by 60 gives minutes
  seconds = totalSeconds % 60;          // Remaining seconds after extracting hours and minutes

  // print the results
  printf("%d seconds is equal to %d hours, %d minutes and %d seconds.\n", totalSeconds, hours, minutes, seconds);
}