// Day 019 - 18th August 2020
// ===============================================
//
// (Note: Solve using For-loop - compulsory)
//
// 1. Write a program to print the first 10 natural numbers.
// Sample Output:
// 1 2 3 4 5 6 7 8 9 10
// -------------------------------------------------
//
// 2. Modify the above program to find the sum of first n natural numbers using for loops.
// Sample output:
// Enter the value of n: 10
// The first 10 natural numbers are:
// 1 2 3 4 5 6 7 8 9 10
// The sum of first 10 natural numbers: 55
// ------------------------------------------------
#include <stdio.h>
int main()
{
    int  n, sum = 0 ;
    int num;
    printf("Enter the value of n: ");
    scanf("%d", &num);
    printf("The first 10 natural number is :\n");

    for (n = 1; n<= num; n++)
    {
        sum = sum + n;
        printf("%d ",n);
    }
    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
