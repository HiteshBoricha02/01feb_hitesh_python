// Write a program to swap two numbers without using third variable
#include<stdio.h>
int main()
{
    int x,y;
    printf("\nEnter First Value :");
    scanf("%d",&x);
    printf("\nEnter Second Value : ");
    scanf("%d",&y);
    printf("\n \t%d + %d = %d",x,y,x+y);
    printf("\n \t%d - %d = %d",x,y,x-y);
    printf("\n \t%d / %d = %d",x,y,x/y);
    printf("\n \t%d * %d = %d",x,y,x*y);
    printf("\n \tIncrement of x : %d  ",++x);
    printf("\n \tDecrement of y : %d ",--y);

}