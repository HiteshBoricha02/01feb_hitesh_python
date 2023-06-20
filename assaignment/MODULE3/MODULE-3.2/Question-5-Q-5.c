// Find Sum Odd numbers are there using loop

#include<stdio.h>

int main()
{
    int num,sum = 0;

    // Enter Number  find how many number are even 
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

            //  Addition of All Odd number
            sum = sum + i; 
        }
        
    }
    
    //  Print Sum of Odd Number
    printf("\n\nSum of All Odd Numbers from 1 to %d is %d ",num,sum);

}