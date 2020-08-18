// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 1. Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
//
// ==========================================================


#include <stdio.h>
int check (int side1 ,int side2 , int side3)
{
if(side1==side2 && side2==side3)
{
printf("\n Equilateral triangle.");
 }
 else if (side1==side2 || side1==side3 || side2==side3)
  {
printf("\n Isosceles triangle.");
  }
else
{
 printf("\n Scalene triangle.");
}
}
 int main()
{
int side1, side2, side3;
 printf("Enter three sides of triangle: ");
 scanf("%d%d%d", &side1, &side2, &side3);
 check ( side1, side2, side3 );
 return 0;
 }
