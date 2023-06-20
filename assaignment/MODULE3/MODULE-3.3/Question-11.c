// WAP to show Different between STRUCTURE & UNION


// Program of Structure

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

// Program of Union

/*#include <stdio.h>
union info
{
    int pass;
    char nm[20];
} object;

int main()
{
    printf("Enter Your Password :");
    scanf("%d",&object.pass);
    printf("Enter Your Name :");
    scanf("%s",&object.nm);
    
    printf("%d Your Password is stored : %s ",object.pass,object.nm);
}*/