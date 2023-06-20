// Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>

// Created a Structure by Name of empdata
struct empdata
{
    int id,age;
    char nm[25], add[70];

};

int main()
{
    // Create "ob" object
    struct empdata ob[70];
     
    // loop for 5 employee data
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

    printf("\t\t\t-- Your Employee Details is -- \n");

    for (int i = 0; i < 5; i++)
    
    {

    // Print information     
    printf("\n --> Your ID is      : %d \v --> Your Name is    : %s \v --> Your Address is : %s \v --> Your Age is     : %d",ob[i].id,ob[i].nm,ob[i].add,ob[i].age);    

    printf("\n----------");

    }
    
    
}