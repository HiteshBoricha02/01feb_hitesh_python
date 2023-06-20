// WAP to do Summation of First And Last digit given by user

#include<stdio.h>
int main()
{
    int number,ans,fn,ln;
    //  message to Enter Values 
    printf("Enter Numbers  :");
    // scan Store the Value 
    scanf("%d",&number);
    
    //f Find Last Digit from given numbers
    ln = number % 10;
    
    //Find the first digit by dividing n by 10 
    while ( number >= 10)
    {
        number = number/ 10;
    }
    fn = number;
    
    //  sum of First & Last digit 
    ans = fn + ln;
    
    // sum of First & Last digit 
    printf("Sum of First & Last digit is : %d",ans);



}