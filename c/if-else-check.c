// write a program to check get license or not


#include<stdio.h>
int main()
{
    int age;

    printf("enter Your age:\n");
    scanf("%d",&age);

    if (age>18)
    {
        printf("You are  eligible for license");
    }
    

    else{
        printf("You are  not Eligible for license");
    }

    return 0;
}