// Create a program to check if a given number is a power of two using bitwise operations.

#include <stdio.h>
void main()
{
    int num, temp, count = 0;
    printf("\n enter value of num");
    scanf("%d", &num);
    temp = num;

    // logic
    while (num > 0)
    {
        if ((num & 1) != 0)
        {
            count++;
        }
        num = num >> 1;
    }
    if (count == 1)
    {
        printf("\n%d num is pow of 2", temp);
    }
    else
    {
        printf("\n %d not power of 2", temp);
    }
}