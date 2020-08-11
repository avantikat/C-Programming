#include <stdio.h>
void main()
{
int a, b;
printf("enter 1st number :a");
scanf("%d",&a);
printf("enter 2nd number:b");
scanf("%d",&b);
printf("value of a and b  before swapping is a=%d,b=%d", a, b);
a=a+b;
b=a-b;
a=a-b;
printf("value of  a and b after swapping is a=%d,b=%d", a, b);
}
