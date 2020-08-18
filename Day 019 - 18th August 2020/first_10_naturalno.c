// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 1. Write a program to print the first 10 natural numbers.
// Sample Output:
// 1 2 3 4 5 6 7 8 9 10
// -------------------------------------------------

#include <stdio.h>
int main()
{
    int  n, sum = 0;

    printf("The first 10 natural number is :\n");

    for (n = 1; n<= 10; n++)
    {
        sum = sum + n;
        printf("%d ",n);
    }
    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
