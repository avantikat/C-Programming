#include <stdio.h>
int main ()
{
	float  num1, num2;
	char operator ;
Printf("enter a num1");
Scanf("%d"&num1);
Printf("enter a num 2");
Scanf("%d",&num2");
	printf("enter a type of operator. \n");
	scanf("%f %c %d",&num1, &operator, &num2);
	if(operator=='+')
	printf("%f", num1+ num2);
	else if(operator=='-')
	printf("%f",num1-num2);
	else if(operator=='*')
	printf("%f",num1*num2);
	else if(operator=='/')
	printf ("%f",num1/num2);
	else if("unknown  operator.\n");
	return 0;
}
