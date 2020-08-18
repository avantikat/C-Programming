// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 3. Write a program that accepts two floating­point numbers and checks whether they are the same up to two decimal places.
//
// Example:
//
// num1 = 25.585 ----> (25.58 - upto 2 decimals)
// num2 = 25.589 ----> (25.58 - upto 2 decimals)
// Therefore, both numbers are same!

#include <stdio.h>
void check (float x, float y)
{
 if(((x -y)<0.01)&& (x>y))
  {
  printf("\n the number are same");
  }
  else if (((y-x)<0.01)&&(y>x))
 {
  printf("\n the number are same");
   }
   else
   {
   printf("\n The number are different ");
 }
}
int main()
 {
 float x, y;
 printf("\n enter first number : ");
 scanf("%f", &x);
 printf("\n enter second number : ");
 scanf("%f", &y);
 check(x,y);
 return 0;
 }
