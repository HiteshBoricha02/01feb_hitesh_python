// WAP to print Fibonacci series up to given numbers

#include <stdio.h>
void main()
{
    int number, x1 = 0, x2 = 1, x3;
    
    // to pass message to user 
    printf("Enter Number to create Fibonacci Series : ");
    // scan to store given number
    scanf("%d", &number);

    // using loop for fibonacci series 
    for (int i = 0; i < number; i++)
    {
        // number print 
        printf("%d, ", x1);
        x3 = x1 + x2;
        x1 = x2;
        x2 = x3;
    }
}
