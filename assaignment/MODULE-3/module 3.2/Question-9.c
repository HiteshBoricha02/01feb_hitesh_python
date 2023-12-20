//WAP to Find Summation of Given Number

#include<stdio.h>
int main()
{
    int number,x,y;

    printf("Enter Number : ");
    scanf("%d",&number);
    y= 0;
    for ( int i = 1; number%10>0; i++)
    {
        x = number % 10;
        
        y = y+x;
        number = number/10;
        
    }
    printf("Summation Of Given number is : %d",y);
    return 0;
}