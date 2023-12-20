// Find out How many Even numbers are there using loop
#include<stdio.h>

int main()
{
    int num;

    
    printf("Find Even number from 1 to --> ");
    scanf("%d",&num);

    
    printf("\nEven Numbers From 1 to %d is : ",num);

    
    for (int i = 1; i < num ; i++)
    {

        
        if (i % 2 == 0)
        {
            printf("%d, ",i);
        }
        
    }

    
    
}