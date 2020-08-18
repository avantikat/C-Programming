// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 2. Write a program that accepts three numbers from the user and prints "increasing" if the numbers are in increasing order,
//  "decreasing" if the numbers are in decreasing order, and "Neither increasing or decreasing order"
//   otherwise.

#include <stdio.h>
int check (int x, int y, int z)
{
 if(x>y && y>z)
  {
  	printf("\n The number is in descending order");
  	 }
  else if(x<y && y<z)
  	 {
  	 printf("\n The number is in ascending order");
  	  }
  else
  {
  printf("\n not in ascending and not in descending order ");
   }
  }
int main()
 {
 int x, y, z;
 printf("\n enter first number : ");
 scanf("%d", &x);
 printf("\n enter second number : ");
 scanf("%d", &y);
 printf("\n enter third number :");
 scanf("%d",&z);
 check(x,y, z);
 return 0;
 }
