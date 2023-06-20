// WAP to find reverse of string using recursion

#include<stdio.h>

void revstring();
int main()
{
    printf("Enter Sentence : ");
    revstring();
    return 0;
}

void revstring()
{
    char string;

    scanf("%c",&string);
    if (string != '\n')
    {
        revstring();
        printf("%c",string);
    }
    
}