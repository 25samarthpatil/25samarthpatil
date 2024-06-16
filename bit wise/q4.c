// Write a C function to toggle the nth bit of a given integer

#include <stdio.h>
void main()
{
    int num, pos;
    printf("\n enter num");
    scanf("%d", &num);
    printf("\n enter pos"); // position
    scanf("%d", &pos);

    // logic

    num = num ^ 1 << pos;
    printf("output is=%d", num);
}