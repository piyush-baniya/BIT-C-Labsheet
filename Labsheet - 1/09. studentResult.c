// if the marks obtained by a student in five subjects are input through the keyboard. find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include <stdio.h>

void main()
{
  // variable declaration
  int subject1, subject2, subject3, subject4, subject5;
  int aggregate;
  float percentage;

  // ask user for marks in each subject
  printf("Enter marks for Subject 1: \n");
  scanf("%d", &subject1);
  printf("Enter marks for Subject 2: \n");
  scanf("%d", &subject2);
  printf("Enter marks for Subject 3: \n");
  scanf("%d", &subject3);
  printf("Enter marks for Subject 4: \n");
  scanf("%d", &subject4);
  printf("Enter marks for Subject 5: \n");
  scanf("%d", &subject5);

  // calculate aggregate marks
  aggregate = subject1 + subject2 + subject3 + subject4 + subject5;

  // calculate percentage
  percentage = (float)aggregate / 5;

  // print the results
  printf("Aggregate marks: %d\n", aggregate);
  printf("Percentage marks: %.2f%%\n", percentage);
}