
// write a program to ternary operator


#include<stdio.h>
int main()
{

    int A;

    printf("Enter the value of A\n");
    scanf("%d",&A);


    ( A < 10 ) ? printf("A is small than 10") : printf("A is big than 10");
    return 0;
}