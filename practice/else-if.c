#include<stdio.h>
void main()
{
    int no;
    printf("\n enter the value of no:");
    scanf("%d",&no);
    if(no >0)
    {
        printf("\n no is positive:");
    }
    else if(no == 0)
    {
        printf("no is zero.");
    }
    else 
    {
        printf("\n given number is nagative.");   
    }
    

}