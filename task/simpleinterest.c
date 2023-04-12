// find simple interest
#include<stdio.h>
void main()
{
    float finalamount;
    float principalbalance;
    float interestrate;
    float time;
    printf("enter a principalbalance");
    scanf("%f",&principalbalance);
    printf("\nenter a interestrate:");
    scanf("%f",&interestrate);
    printf("\nenter a time:");
    scanf("%f",&time);
    finalamount = (principalbalance*interestrate*time)/100;
    printf("your final amount is :%f",finalamount);

}