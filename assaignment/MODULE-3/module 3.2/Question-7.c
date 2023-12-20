// WAP to print Fibonacci series up to given numbers

#include <stdio.h>
void main()
{
    int number, x1 = 0, x2 = 1, x3;
    

    printf("Enter Number to create Fibonacci Series : ");
    
    scanf("%d", &number);


    for (int i = 0; i < number; i++)
    {
        
        printf("%d, ", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
}
