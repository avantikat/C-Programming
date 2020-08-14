// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 2. Write a program to angles of a triangle and check whether triangle is valid
// or not.
// Hint: Sum of Angles of triangle = 180;

#include<stdio.h>
int check (int angle1, int angle2, int angle3,int sum)
{
if(sum==180 )
{
printf("\n Triangle is valid.");
}
else
{
printf("\n Triangle is not valid.");
}
}
int main ()
{
int angle1,angle2,angle3,sum;
printf("Enter  three  angles  of  triangle:\n");
scanf("%d%d%d",&angle1,&angle2,&angle3);
sum=(angle1 + angle2 + angle3);
check (angle1,angle2,angle3,sum);
}
