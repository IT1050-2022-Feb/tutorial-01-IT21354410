/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int sub1,sub2,avg;

	printf("Enter Marks of Subject :");
	scanf("%d",&sub1);
	
	printf("Enter Marks of Subject :");
	scanf("%d",&sub2);
	
	
	avg=(sub1+sub2)/2;
   printf("Average Mark of the Student is %d",avg);
   

  return 0;
}

