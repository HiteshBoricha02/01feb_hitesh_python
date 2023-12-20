// Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>
using namespace std;


inline int multiplication(int x, int y)
{
    
    return x * y;
}


inline int cubic(int x)
{
    
    return x * x * x;
}

int main()
{
    int x,y,ans,cube,cube1;

    cout<<"Enter First number :";
    cin>>x;
    cout<<"Enter Second number :";
    cin>>y;

    
    ans=multiplication(x,y);
    cout<<endl<<"Multiplication of "<<x<<" and "<<y<<" is : "<<ans;
 
    cube=cubic(x);

    
    cube1=cubic(y);
    cout<<endl<<"Cube of "<<x<<" is : "<<cube;
    cout<<endl<<"Cube of "<<y<<" is : "<<cube1;

    return 0;
}