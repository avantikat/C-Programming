
// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 2. Write a program to find maximum between three numbers.

#include <stdio.h>
int largestNumber(int num1,int num2, int num3)
 {
 	int largest=0;
 	if(num1>num2 && num1>num3)
 	largest=num1;
 	else if(num2>num1&& num2>num3)
	largest=num2;
 else
 largest=num3;
 return largest;
  }
  int main()
   {
 int num1 ,num2,num3;
printf("Enter three numbers: ");
scanf("%d%d%d",&num1,&num2,&num3);
 printf("\n Largest number is: %d\n",largestNumber(num1,num2,num3));
 	  	return 0;
 	  	 }
