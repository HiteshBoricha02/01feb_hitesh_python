// Write a program of structure employee that provides the following information -print and display empno, empname, address and age

#include<stdio.h>


struct empdata
{
    int empno,age;
    char empname[26],address[70];
};

int main()
{
    
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

         
    printf("\n Your ID       : %d \v  Your Name     : %s \v  Your Address  : %s \v  Your Age      : %d",ob.empno,ob.empname,ob.address,ob.age);    


}