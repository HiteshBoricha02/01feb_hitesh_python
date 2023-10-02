
// write a program to check 18+ or not


#include <stdio.h>
int main()
{
    int age;

    printf("Enter Your age :\n" );
    scanf("%d",&age);


    if (age<18)
    {
        printf("you are not eligible for drive ");
    }


    else{
        printf("you are eligible for drive");
    }

    return 0;
    
}