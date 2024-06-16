// Write a C program to swap two numbers using bitwise XOR.

#include <stdio.h>
void main()
{
    int x, y;
    printf("enter value of x and y=\n");
    scanf("%d %d", &x, &y);
    // before swapping
    printf("before swapping\n");
    printf("\n x=%d and y=%d", x, y);

    // logic
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    // after swapping
    printf("\n after swapping");
    printf("\n x=%d\ty=%d", x, y);
}