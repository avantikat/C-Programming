// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 1. Write a program to check whether a character is uppercase or lowercase.
// Hint: https://www.geeksforgeeks.org/isupper-islower-application-c/
//
// ==========================================================================

#include<stdio.h>
void check (char ch)
{
if (ch >='A'&& ch<='Z')
{
 printf("character =uppercase alphabet ");
}
else if(ch>='a'&& ch <'z')
{
printf("character =lowercase  alphabet");
}
else
{
printf("character =is not an alphabet ");
}
}
int main ()
{
char character ;
printf("enter a  character ");
scanf("%c",&character);
return (character );
}
