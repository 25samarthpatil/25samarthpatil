// Implement a function to count the number of set bits (1s) in an integer.

#include <stdio.h>
void main()
{
    int i, num, count = 0;
    printf("\n enter num");
    scanf("%d", &num);

    // logic
    while (num > 0)
    {
        if ((num & 1) == 1)
        {
            count++;
        }
        num = num >> 1;
    }
    printf("set bit count are=%d", count);
    
}