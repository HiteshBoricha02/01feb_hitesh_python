// Find Sum Odd numbers are there using loop

#include<stdio.h>

int main()
{
    int num,sum = 0;

     
    printf("Find Odd number from 1 to --> ");
    scanf("%d",&num);

    
    printf("\nOdd number From 1 to %d is : ",num);

    
    for (int  i = 1; i < num ; i++)
    {

        
        if (i % 2 != 0)
        {
            printf("%d, ",i);

            
            sum = sum + i; 
        }
        
    }
    
    
    printf("\n\nSum of All Odd Numbers from 1 to %d is %d ",num,sum);

}