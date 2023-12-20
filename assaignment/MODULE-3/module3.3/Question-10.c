// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>


struct empdata
{
    int id,age;
    char nm[25], add[70];

};

int main()
{
    
    struct empdata ob[70];
     
    
    for (int i = 0; i < 5; i++)
    {

    
    printf("\n----------");

    printf("\nEnter Your Employee ID Number :");
    scanf("%d",&ob[i].id); 

    printf("\nEnter Employee Name :");
    scanf("%s",&ob[i].nm);

    printf("\nEnter Employee Address :");
    scanf("%s",&ob[i].add);

    printf("\nEnter Employee Age :");
    scanf("%d",&ob[i].age);

    }

    printf("\t\t\t Your Employee Details  \n");

    for (int i = 0; i < 5; i++)
    
    {

         
    printf("\n  Your ID is      : %d \v --> Your Name is    : %s \v  Your Address is : %s \v  Your Age is     : %d",ob[i].id,ob[i].nm,ob[i].add,ob[i].age);    

    printf("\n----------");

    }
    
    
}