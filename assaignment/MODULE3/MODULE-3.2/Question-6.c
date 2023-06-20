//WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main()
{
    int x,i;
    long int fact = 1;
    
    //   enter number for find factorial
    printf("Enter Numbers : ");
    // to store the given number
    scanf("%d",&x);
    
    // Multiplication of the given number in loop 
    for ( i = 1 ; i < x ; i++)
    {
        fact *= i;
    }
    
    //  given Number to user 
    printf("\nFactorial of %d is : %ld",x,fact);

    return 0;

       
}