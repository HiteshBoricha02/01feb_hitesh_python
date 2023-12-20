// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>
void main()
{
    int x,y;
    int ans;
    float div;
    printf("tEnter first number\t:");
    scanf("%d",&x);
    printf("enter the second number\t:");
    scanf("%d",&y);
    ans=x+y;
    printf("Addition Two Numbers is :              %d",ans);
    ans=x-y;
    printf("\n\nSubtraction  Two Numbers is :      %d",ans);
    ans=x*y;
    printf("\n\nMultiplication Two Numbers is :    %d",ans);
    div=(float)x/(float)y;
    printf("\n\nDivision  Two Numbers is :         %f",div);
    ans=x%y;
    printf("\n\nModulo of Two Numbers is :         %d",ans);
} 