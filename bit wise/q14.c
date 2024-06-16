// Implement a function to find the XOR of all numbers in a given range.

#include<stdio.h>
int main()
{
    int start,result=0,end;

    printf("\n enter value of start=");
    scanf("%d",&start);

    printf("\n enter value of end=");
    scanf("%d",&end);

    //for (int start ; start <= end; start++)
    while (start<=end)
    {
        result= result ^ start;
        start++;
    }
    printf("\n xor of all no=%d",result);
    
}