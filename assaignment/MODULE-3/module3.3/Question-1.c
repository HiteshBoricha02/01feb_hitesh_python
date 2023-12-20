#include <stdio.h>
#include <math.h>

int main() 
{
    int x[10];
    
    
    for(int i = 0; i<= 9; i++)
    {
        printf("Enter number in index - %d : ",i);
        scanf("%d",&x[i]);
    }

    
    int max = x[0];
    for(int i = 0; i <= 9; i++)

    {

    max = fmax(max,x[i]);
    
    }
    
    // print max number  
    printf("\nMaximum number from array is %d",max);
    return 0;
}
