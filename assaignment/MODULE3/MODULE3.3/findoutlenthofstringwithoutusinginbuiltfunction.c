// wap find out length of string without using inbuilt function
#include<stdio.h>
void main()
{
    char word[50];
    int i;
    // pass message to user for enter string
    printf("enter same words:");
    // store the entered value
    scanf("%s",&word);
    // loop for count the string
    for( i = 0; word[i] !=0; i++);
    // print the number of string
    printf("length of %s is : %d numbers",word,i);
    

}