//  marks in per subject
#include<stdio.h>
int main()
{
    int maths,physics,chemistry,electronics,total;
    printf("enter a marks in       maths:");
    scanf("%d",&maths);
    printf("enter a marks in     physics:");
    scanf("%d",&physics);
    printf("enter a marks in   chemistry:");
    scanf("%d",&chemistry);
    printf("enter a marks in electronics:");
    scanf("%d",&electronics);
    total = maths + physics + chemistry + electronics;
    float percentage = (total / 400.0)  * 100;
    char grade;
    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'c';
    }
    else if (percentage >= 60)
    {
        grade = 'D';    
    }
    else if (percentage <= 50)
    {
        grade = 'F';
    }
    else
    {
        printf("fail");
    }
    
    printf("Total marks:%d\n",total);
    printf("percentage:%.2f\n",percentage);
    printf("Grade: %c\n",grade);
    if (grade == 33)
    {
        printf("f");
    }
    else{

        printf("p");
    }
}