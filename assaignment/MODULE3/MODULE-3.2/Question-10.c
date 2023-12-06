// WAP to do Summation of First And Last digit given by user

#include<stdio.h>
int main()
{
    int number,ans,fn,ln;
    //  message to Enter Values 
    printf("Enter Numbers  :");
    // scan Store the Value 
    scanf("%d",&number);
    
    
    ln = number % 10;
    
     
    while ( number >= 10)
    {
        number = number/ 10;
    }
    fn = number;
    
     
    ans = fn + ln;
    
    
    printf("Sum of First & Last digit is : %d",ans);



}