#include <stdio.h>
int main()
{
    int i;
    int flag = 0, no;
    printf(" enter the number to check number is prime or not prime");
    scanf("%d", &no);
    for (i = 2; i < no; i++)
    {
        if(no% i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime:
    if ( flag == 0)
    {
        printf("%dis prime number",no);

    }
    else
    {
        printf("%d is not prime number",no);
    }
}