#include<stdio.h>
void main()
{
    int a,b,calculation,ans;
    printf("\tcalculation that you can perform in this calculator");
    printf("\n\n\t 1. addition        \t+ \n\t 2.substraction   \t- \n\t 3.divison        \t/ \n\t 4.multiplaction \t*");
    printf("\nenter your value:");
    scanf("%d",&a);
    printf("\nchoose any action:");
    scanf("%d",&calculation);
    printf("\n enter your second value:");
    scanf("%d",&b);
    switch(calculation)
    {
        case 1:
        printf("\n %d + %d = %d", a, b, a + b);
        break;
        case 2:
        printf("\n %d - %d = %d", a, b, a - b);
        break;
        case 3:
        printf("\n %d / %d = %d", a, b, a / b);
        break;
        case 4:
        printf("\n %d * %d =%d", a, b, a *b);
        break;
        default:
        printf("\n sorry thais action is not avalable");
        printf( "\n sorry for incovenionce");

    }




}