// Day 010 - 9th August 2020
// ==============================================
// 2. Write a program to check if a year is leap year or not.
// If a year is divisible by 4 then it is leap year but if the year is century
// year like 2000, 1900, 2100 then it must be divisible by 400.
// ==============================================

#include<stdio.h>
int main ()
{
 int year ;
printf("enter a year ");
scanf("%d",&year);
if (year%400==0)
{
printf("%d is a leap year ");
}
else if (year%4==0)
{
 printf("%d is a leap year ");
}
else
{
printf("%d is not a leap year");
}
return 0;
}
