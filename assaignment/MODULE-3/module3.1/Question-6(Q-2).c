// convert days into year
#include<stdio.h>
void main()
{
    float days;
    float years;
    printf("enter days");
    scanf("%f",&days);
    years=(float)days/(float)365;
    printf("days equals to '%f'years",years);

}