// WAP to show Different between STRUCTURE & UNION




#include<stdio.h>
struct data
{
   int id;
   char nm[20];
} st;

int main()
{
printf("Enter Your Name :  ");
scanf("%s",&st.nm);
printf("Enter Your Id : ");
scanf("%d",&st.id);
printf("%s Your id is %d",st.nm,st.id);
}

