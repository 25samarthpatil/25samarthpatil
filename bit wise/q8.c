//Implement a function to find the number of bits needed to represent an integer in binary.

#include<stdio.h>

int main()
{
    int num,count=0;
    printf("\n enter value of num");
    scanf("%d",&num);


    // logic
    while (num>0)
    {
        if ((num & 1)!=0)
        {
            
            count ++;
        }
        num=num >> 1;
        
    }
    printf("\n total no of bits required to integer=%d",count);
    return 0;
}



