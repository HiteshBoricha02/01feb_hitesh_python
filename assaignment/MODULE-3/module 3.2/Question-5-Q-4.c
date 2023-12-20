// Find Sum of Even numbers using loop

#include<stdio.h>

int main()
{
    int num,sum = 0;

    printf("Find Even number from 1 to --n ");
    scanf("%d",&num);

    
    printf("\nEven Number From 1 to %d is : ",num);


    for (int i = 1; i < num ; i++)
    {

        
        if (i % 2 == 0)
        {
            printf("%d, ",i);

            
            
            sum = sum + i;
        }
        
    }

    
    printf("\n\nSum of All Even Number from 1 to %d is : %d ",num,sum);
    
    
}