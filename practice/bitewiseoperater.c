//bitwise operators &,!,|,~,<<,>>,^,
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the value of a and b :");

    scanf("%d%d" ,&a,&b);
    printf("\nbitewise and is         :%d",a&b);
    printf("\n bitewise or is         :%d",a|b);
    printf("\n bitewise not is        :%d",!(a|b));
    printf("\n bitewise shift left is :%d",a<<1);
    printf("\n bitewise shift right is :%d",a>>1);
    printf("\n bitewise compliment is  :%d",~a);
    printf("\n bitewise XOR (excluve or) is :%d",a^b);

           
    }
        