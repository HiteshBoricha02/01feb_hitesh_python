//convert year into day
#include<stdio.h>
float main()
{
    float years;
    float days;
    printf("enter year:");
    scanf("%f",&years);
    days = years*365.2425;
    printf("years='%f'Days ",days);
}