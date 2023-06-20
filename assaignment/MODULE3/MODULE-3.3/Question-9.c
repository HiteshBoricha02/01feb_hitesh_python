// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>

//  Create structure empdata 
struct empdata
{
    int empno,age;
    char empname[26],address[70];
};

int main()
{
    // create "obj" object for structure 
    struct empdata ob;

    printf("Enter Your Employee ID Number :");
    scanf("%d",&ob.empno); 

    printf("\nEnter Your Name :");
    scanf("%s",&ob.empname);

    printf("\nEnter Your Address :");
    scanf("%s",&ob.address);

    printf("\nEnter Your Age :");
    scanf("%d",&ob.age);

    printf("\t\t\t-- Your personal Details is -- \n");

    // Print data     
    printf("\n ==> Your ID is      : %d \v ==> Your Name is    : %s \v ==> Your Address is : %s \v ==> Your Age is     : %d",ob.empno,ob.empname,ob.address,ob.age);    


}