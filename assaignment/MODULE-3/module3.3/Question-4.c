// WAP TO Find Factorial Using Recursive Function

#include <stdio.h>

long int facto(long int num)
{
    if (num < 1)
    {
        return 1;
    } 
    
    return num * facto (num -1);
    
}
int main ()
{
    long int x;
    printf("Enter the Value of no :");
    scanf("%ld",&x);
    printf("Factorial no of %ld is : %ld",x,facto(x));
    return 0;
}