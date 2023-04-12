// swap without using third variable
#include<stdio.h>
int main()
{
int a;
int b;
printf("enter a value of a :");
scanf("%d",&a);
printf("enter a value of b :");
scanf("%d",&b);
printf("\n  \t%d + %d = %d",a,b, a + b);
printf("\n  \t%d - %d = %d",a,b, a - b);
printf("\n  \t%d / %d = %d",a,b, a / b);
printf("\n  \t%d * %d = %d",a,b,  a * b);
printf("\n  \tincrement of a :%d",++a);
printf("\n  \tdecrement of b :%d",--b);
}