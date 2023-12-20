//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>
void main()
{
    int i,j,x[10],swap;

      
    printf("Enter Numbers in Random Order : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&x[i]);
    }
    

    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1 ; j < 5; j++)
        {
            if (x[i] > x[j])
            {
                
                
                swap = x[i];
                x[i] = x[j];
                x[j] = swap;
            }
            
        }
        
    }
    printf("Ascending Numbers :");
    for ( i = 0; i < 5; i++)
    {
        printf("%d, ",x[i]);
    }

    // Descending order
     for ( i = 0; i < 5; i++)
    {
        for ( j = i+1 ; j < 5; j++)
        {
            if (x[i] < x[j])
            {
                
                // Swap method for Descending 
                swap = x[i];
                x[i] = x[j];
                x[j] = swap;
            }
            
        }
        
    }
    printf("\nDescending Numbers :");
    for ( i = 0; i < 5; i++)
    {
        printf("%d, ",x[i]);
    }
}