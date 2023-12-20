// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

 
class Arithmetic
{
    int x,y;    

    public:

    
    Arithmetic(int v1 ,int v2)
    {
        x = v1;
        y = v2;
    }

    
    int add()
    {
        return x + y;
    }

    
    int sub()
    {
        return x - y;
    }        


    int mul()
    {
        return x * y;
    }

    
    int div()
    {
        return x / y; 
    } 
};

int main()
{
    
    int x,y;

    cout<<"Enter First Value : ";
    cin>>x;
    cout<<"Enter Second Value : ";
    cin>>y;

    
    Arithmetic calc(x,y);

     
    cout<<"Addition "<<x<<" and "<<y<<" is       : "<<calc.add()<<endl;
    cout<<"Subtraction "<<x<<" and "<<y<<" is    : "<<calc.sub()<<endl;
    cout<<"Multiplication "<<x<<" and "<<y<<" is : "<<calc.mul()<<endl;
    cout<<"Division "<<x<<" and "<<y<<" is       : "<<calc.div()<<endl;


    return 0;
}