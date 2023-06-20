// Find out How many Odd numbers are there using loop

#include<stdio.h>

int main()
{
    int num;

    // Enter Number from 1 to .....n for find how many number are even in between 
    printf("Find Odd number from 1 to --> ");
    scanf("%d",&num);

    //  print Odd numbers
    printf("\nOdd number From 1 to %d is : ",num);

    // start loop for increment 
    for (int  i = 1; i < num ; i++)
    {

        //  check odd number
        if (i % 2 != 0)
        {
            printf("%d, ",i);
        }
        
    }
    
}