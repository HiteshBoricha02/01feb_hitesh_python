// Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;

//  function for multiplication
inline int multiplication(int x, int y)
{
    // formula for multiplication
    return x * y;
}

//  function for cubic value
inline int cubic(int x)
{
    // formula for find cube number
    return x * x * x;
}

int main()
{
    int x,y,ans,cube,cube1;

    cout<<"Enter First number :";
    cin>>x;
    cout<<"Enter Second number :";
    cin>>y;

    //int to ans of multiplication
    ans=multiplication(x,y);
    cout<<endl<<"Multiplication of "<<x<<" and "<<y<<" is : "<<ans;
 
    cube=cubic(x);

    //int cube1 for find cube of second value
    cube1=cubic(y);
    cout<<endl<<"Cube of "<<x<<" is : "<<cube;
    cout<<endl<<"Cube of "<<y<<" is : "<<cube1;

    return 0;
}