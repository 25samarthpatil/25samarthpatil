// Implement a C program to check if the kth bit is set or unset in a given integer.

#include <stdio.h>
void main()
{
    int num, pos;
    printf("\n enter num");
    scanf("%d", &num);
    printf("\n enter pos"); // position
    scanf("%d", &pos);

    // logic

    if ((num & 1 << pos) == 0)
    {
        printf("\n%d is 0(clr/reset)", pos);
    }
    else
    {
        printf("\n%d is 1(set)", pos);
    }
}
