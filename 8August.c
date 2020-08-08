 1)  #include<stdio.h>
int main ()
{
int i, j, n; 
for(i=1;i<=4;i++)
{
for(j=1;j<=4;j++)
{
printf("#");
}
printf("\n");
}
}


2) #include<stdio.h>
int main()
{
int i, j;
for(i=1; i<=6;i++)
{
for(j=1;j<=i; j++)
{
printf("*");
}
printf("\n");
}



3)#include <stdio.h>
int main()
{
int i, n,j;
for(i=1;i<=6;i++)
{
for(j=6;j>i;j--)
{
printf("*");
}
printf("\n");
}
}
