// wap find out length of string without using inbuilt function
#include<stdio.h>
void main()
{
    char letter[50];
    int i;
    printf("Enter Letter:");
    scanf("%s",&letter);
    // count the string
    for( i = 0; letter[i] !=0; i++);
    // print number of string
    printf("length of %s is : %d numbers",letter,i);
    

}