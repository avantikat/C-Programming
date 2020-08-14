// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 3. Write a program to check whether a number is negative, positive or zero

#include<stdio.h>
int num (int num);
int main()
{
int num ,positive, negative, zero;
printf("enter a number ");
scanf("%d",&num);
if (num>0)
{
printf ("\n number is positive ");
}
 else if (num<0)
 {
printf("\n number is negative" );
}
 else if(num==0)
 {
 printf("\n number is zero ");
 }
 else
 {
 printf("\n it is not a number");
 }
  return 0;
  }
