/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,avg;

  print("Input mark 1:")
  scanf("%f",&mark1);

  print("Input mark 2:")
  scanf("%f",&mark2)
    
  avg=(mark1 + mark2)/2;

  printf("Average mark : %d",avg);
  return 0;
}

