//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
    int x,i;
    long int fact = 1;
    

    printf("Enter Numbers : ");
    
    scanf("%d",&x);
    
     
    for ( i = 1 ; i < x ; i++)
    {
        fact *= i;
    }
    
    
    printf("\nFactorial of %d is : %ld",x,fact);

    return 0;

       
}