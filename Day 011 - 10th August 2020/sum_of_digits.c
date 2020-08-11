// day 11 - 10th August 2020
// =========================================================
//
// 2. Calculate the sum of digits of a number given by user. E.g.-
//    INPUT : 123        OUTPUT : 1 + 2 + 3 = 6
//    INPUT : 12345      OUTPUT : 1 + 2 + 3 + 4 + 5 = 15
//
// Hint = Same logic as Armstrong number wala program!
// =========================================================

#include<stdio.h>
int main()
{
	int num,x,sum=0;
	printf("enter a number ");
	scanf("%d",&num);
	while(num>0)
	{
		x=num%10;
		sum=sum + x;
		num=num/10;
	}
	printf("sum of digts of a number = %d",sum);
}


	
