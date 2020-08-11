// ==============================================
// Day 010 - 9th August 2020
//
// 1. Write a program to print half pyramid using numbers.
// Sample output:
//
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//
// ----------------------------------------

#include <stdio.h>
int main()
{
int i, j, rows;
printf("enter a number of rows");
scanf("%d",&rows);
for (i=1;i<=rows; i++)
{
for(j=1;j<=i; j++)
{
printf("%d",j);
}
printf("\n");
}
}
