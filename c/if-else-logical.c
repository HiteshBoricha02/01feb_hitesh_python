
// write a program to check you are eligible for drive or not 



#include<stdio.h>

int main()
{

     int age;

    printf("Enter your age\n");
    scanf("%d",&age);


    if (age <= 70 && age>= 18)
    {
        printf("You are eligible for drive");
    }
    

    else
    {
       printf("You can not eligible for drive");
    }

    return 0;
}