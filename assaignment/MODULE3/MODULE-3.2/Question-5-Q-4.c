// Find Sum of Even numbers using loop

#include<stdio.h>

int main()
{
    int num,sum = 0;

    // Enter for get value 
    printf("Find Even number from 1 to --n ");
    scanf("%d",&num);

    // For print even numbers
    printf("\nEven Number From 1 to %d is : ",num);

    // start loop from 1 and increment it by 1
    for (int i = 1; i < num ; i++)
    {

        // condition check
        if (i % 2 == 0)
        {
            printf("%d, ",i);

            //  Addition of all Even number
            sum = sum + i;
        }
        
    }

    //  Print Sum of Even numbers
    printf("\n\nSum of All Even Number from 1 to %d is : %d ",num,sum);
    
    
}