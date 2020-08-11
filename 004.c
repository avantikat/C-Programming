#include <stdio.h>
int main()
{
int x, y, z;
printf("enter a value of x and y");
scanf("%d %d",&x, &y);
printf ("before swapping x=%d, y=%d",x, y);
 z=x;
x=y;
y=z;
printf("after swapping x=%d, y=%d",x, y);
}
