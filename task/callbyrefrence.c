#include<stdio.h>
int pointer(int *ptr)
{
    return *ptr;
}
int main()
{
    int a = 100;
    printf("%d",pointer(&a));

    return 0;
}