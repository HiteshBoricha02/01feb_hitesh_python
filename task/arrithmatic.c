#include<stdio.h>
void main()
{
    int a,b;
    int ans;
    printf("enter two value");
    scanf("%d%d",&a,&b);
    ans = a+b;
    printf("2 number of addition : %d",ans);
    ans=a-b;
    printf("\n two number of substraction : %d",ans);
    ans= a*b;
    printf("\n two number of multiplication : %d",ans);
    ans=a/b;
    printf("\n two number of division : %d",ans);
    ans = a%b;
    printf("\n two number of modulo : %d",ans);
    ans = a++;
    printf("\n increment of a :%d",a);
    ans = b--;
    printf("\n decrement of b :%d",b);
    
    
    
}