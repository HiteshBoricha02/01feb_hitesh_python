// take a any type of input from user and find the input
#include<stdio.h>
void main()
{
    char type;
    printf("enter any input type");
    scanf("%c",&type);
    if (type>=48 && type<=57)
    {
        printf("your input type is numbers :%c",type);
    }
    else if(type>=65 && type<=90)
    {
        printf("your input type is upper case ALPHABET :%c",type);
    }
    else if(type>=97 && type<=122)
    {
        printf("your input type is lower case alphabet :%c",type);
    }
    else
    {
        printf("your input type is special character :%c",type);
    }
}