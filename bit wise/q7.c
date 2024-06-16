// Write a C program to find the bitwise AND of two integers without using the ‘&’ operator.

#include <stdio.h>
void main()
{
    int x, y, and;
    printf("\n enterr value of ");
    scanf("%d%d", &x, &y);

    // logic
    and = ~(~x | ~y);// de morgns law

    printf("\n %d & %d=%d", x, y, and);
}