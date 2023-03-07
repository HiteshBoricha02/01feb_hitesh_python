// < , >, <=, >=, ==, !=
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b :");
    scanf("%d%d", &a,&b);
    if(a>b)
    {
        printf("a is max");
    }
    else
    {
        printf("b is max");
    }
    if (a<b)
    {
        printf("\n a is small");
    }
    else
    {
        printf("\n b  is small");
    }
    if (a<=b)
     {
        printf("\n a is less than equal to b");
     }
    else
     {
       printf("\n b is less than equal to a");
     }
       if (a>=b)
       {
        printf("\n a is grater than equal to b");
       }
       else
       {
        printf("\n b is grater than equal to a");

       }
       if (a==b)
      {
        printf("\n a and b both are equal");

      }       
       else
       {
        printf("\n a and b both are not equal");
        
       }
       if(a!=b)
       {
        printf("\n a is not equal to b");
       } 
       else 
       {
        printf("\n a and b both are equal");
       }
} 
    