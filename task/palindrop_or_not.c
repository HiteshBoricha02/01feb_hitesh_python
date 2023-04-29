#include<stdio.h>
int main()
{
    int num,reversedNum = 0, remainder,originalNum;
    printf("enter an integer:");
    scanf("%d",&num);
    originalNum = num;

    // revers number 
    for(;num!= 0; num/=10){
        remainder =num%10;
        reversedNum = reversedNum*10+remainder;

    }
    if (originalNum==reversedNum)
    {
        printf("%d is palindromeNumber.",originalNum);

    }
    else
    {
        printf("%d is not palindromeNumber.",originalNum);
    }
}