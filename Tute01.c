/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  float avg;
  
  printf("enter two marks");
  scanf("%d%d",&m1,&m2);
  
  avg = (float)(m1+m2)/2;
  printf("average of %d and %d is: %.2f", m1,m2,avg);

  return 0;
}

