// Create a function to check if two integers have opposite signs without using arithmetic operators.

#include<stdio.h>
void main()
{
    int x,y,num1,num2;
    printf("\n enter value of x and y =");
    scanf("%d%d",&x,&y);

    num1=x & 1<<31;
    num2=y & 1<<31;

    if(num1^num2)
    {
        printf("\n opposite signs");
    }
    else
    {
        printf("\n not opposite signs");
    }


}