// write a program to creat mark shit of student

#include<stdio.h>

int main(){
    int html,css,javascript,react,total;

    printf("Enter Your mark in html \n:   ");
    scanf("%d",&html);

    printf("Enter Your css\n");
    scanf("%d",&css);

    printf("Enter Your mark in javascript\n");
    scanf("%d",&javascript);

    printf("Enter Your mark in react\n");
    scanf("%d",&react);

   total = html + css + javascript + react;
   float percentage = (total / 400.0) *100;
   char grade;

   if (percentage>=90)
   {
    grade ='a';
   }

   else if (percentage>=80)
   {
    grade ='B';
   }

   else if (percentage>=70)
   {
    grade ='c';
   }

   else if (percentage>=60)
   {
    grade = 'd';
   }

   else if (percentage>=50)
   {
    grade = 'f';
   }
     
  else{
    printf("fail\n");
  }

  printf("total marks is%d\n",total);
  printf("your percentage is %f\n" ,percentage);
  printf("your grade is %c\n",grade);

  return 0;


   
   
   
}