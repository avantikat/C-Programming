// [10:11 PM, 8/7/2020] Avantika I²IT:
#include <stdio.h>
void main ()
{
int a,n,b=0,t;
printf ("enter the number" );
scanf("%d",&n);
t=n;
while (n>0)
{
a=n%10;
b=b+a*a*a;
n=n/10;
}
if (b==t)
{
printf("the numbers is Armstrong ");
}
else
{
printf("the numbers is not Armstrong ");
}
}
[10:11 PM, 8/7/2020] Avantika I²IT: #include <stdio.h>
int main()
{
int i, n ,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	sum+=i;

	printf ("sum= %d",sum);
	}
}
