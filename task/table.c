// write a program to print table
#include<stdio.h>
int main()
{
int a;
printf("enter your table :");
scanf("%d",&a);
for ( int b  = 1; b <= 10; ++b)
{
    printf("%d * %d = %d \n", a,b,a*b);
}

}

