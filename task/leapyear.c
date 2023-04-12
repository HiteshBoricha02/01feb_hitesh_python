#include<stdio.h>
void main()
{
    int year;
    printf("enter a year");
    scanf("%d",&year);
    if( year % 400 == 0)
    {
        printf("\n %d is a leap year.",year);
    }
    else if ( year % 100 == 0)
    {
        printf("\n %d is a not a leap year.",year);
    }
    else if (year % 4 == 0)
    {
        printf("\n %d is a leap year.",year);
    }
    else
    {
        printf("\n %d is a not leap year.",year);
    }
}