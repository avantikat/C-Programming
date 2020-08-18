// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 3. Write a program to find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <stdio.h>
int main()
{
   int i,n,sum = 0;
   printf("enter the number : ");
   scanf("%d",&n);
     for(i=1;i<=n;i++)
   {
     printf("\n %d  ", i*i);
     sum+=i*i;
   }
   printf("\n The Sum of  square of Natural Number upto %d  is %d ",n,sum);
}
