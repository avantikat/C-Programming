// Day 011 - 10th August 2020
//===============================================================================
// 1. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//    Ask user for their salary and year of service and print the net bonus amount.
//===============================================================================

#include <stdio.h>
int main()
{
float bonus, year_of_service, salary;
printf("enter your salary ");
scanf("%f",&salary);
printf("enter year of service ");
scanf("%f",&year_of_service);
bonus =salary *0.05;
salary = salary + bonus;
if(year_of_service >= 5)
{
  printf("you got a bonus of Rs. %f",bonus);
  printf("\nYour final salary: Rs. %f",salary);
}
else
  {
  printf("You are not eligible for bonus.");
}
}
