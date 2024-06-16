// Implement a program to find the parity (even or odd) of a binary number using bitwise operations.

#include <stdio.h>
void main()
{
    int i, num, count = 0;
    printf("\n enter num");
    scanf("%d", &num);
//logic
    while (num > 0)
    {
        if ((num & 1) == 1)
        {
            count++;
        }
        num = num >> 1;
    }

    if (count % 2 == 0)
    {
        printf("\n even parity");
    }
    else
    {
        printf("\n odd parity");
    }
}