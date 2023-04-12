#include<stdio.h>
int main()
{
    int a,b,c ,
    max;
    printf("enter the value of a :");
    scanf("%d",&a);
    
    printf("enter the value of b :");
    scanf("%d",&b);

    printf("enter the value of c :");
    scanf("%d",&c);
    // max (a>b)?(a>c ? a:c) ? (b>c ? b:c);
    (a>b) ? (( a>c) ?(printf("a is max.")) :printf("\n c is max.")) : ( (b>c)? printf("b is max.") : printf("c is max"));
    printf("max no is %d",max);

    

    
    
}