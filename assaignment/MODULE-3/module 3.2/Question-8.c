// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>
int main()
{
    int num, rev = 0, x;
    // no = 64728;
    printf("Enter Number :");
    scanf("%d", &num);
    while (num != 0)
    {
        x = num % 10;
        rev = rev * 10 + x;
        num /= 10;
    }
    printf("Reverse Number is : %d ", rev);
}