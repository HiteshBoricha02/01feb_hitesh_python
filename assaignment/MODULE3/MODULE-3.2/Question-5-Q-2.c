// Find out How many Even numbers are there using loop
#include<stdio.h>

int main()
{
    int num;

    // Enter Number from 1 to .....n for find how many number are even in between 
    printf("Find Even number from 1 to --> ");
    scanf("%d",&num);

    // For print  numbers
    printf("\nEven Numbers From 1 to %d is : ",num);

    // start loop for  increment
    for (int i = 1; i < num ; i++)
    {

        // check even number
        if (i % 2 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}