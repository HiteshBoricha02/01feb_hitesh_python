// WAP to find number is even or odd using ternary operator

#include<stdio.h>
int main()
{
    int no;
    printf("Enter any Number :");
    scanf("%d",&no);
    (no % 2 == 0) ? (printf("this Number is Even")) : (printf("this Number is Odd"));
}