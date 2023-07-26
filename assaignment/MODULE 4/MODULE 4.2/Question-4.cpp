// Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

// Arithmetic is class 
class Arithmetic
{
    int x,y;    

    public:

    // Arithmetic is Constructor here with parameter v1 / v2
    Arithmetic(int v1 ,int v2)
    {
        x = v1;
        y = v2;
    }

    // function for Addition
    int add()
    {
        return x + y;
    }

    // function for subtraction
    int sub()
    {
        return x - y;
    }        

    // function for multiplication
    int mul()
    {
        return x * y;
    }

    // function for division
    int div()
    {
        return x / y; 
    } 
};

int main()
{
    // Value of x and y is go to class member x and y
    int x,y;

    cout<<"Enter First Value : ";
    cin>>x;
    cout<<"Enter Second Value : ";
    cin>>y;

    // for print ans of calculation calc is object
    Arithmetic calc(x,y);

    // answers of calculations 
    cout<<"Addition "<<x<<" and "<<y<<" is       : "<<calc.add()<<endl;
    cout<<"Subtraction "<<x<<" and "<<y<<" is    : "<<calc.sub()<<endl;
    cout<<"Multiplication "<<x<<" and "<<y<<" is : "<<calc.mul()<<endl;
    cout<<"Division "<<x<<" and "<<y<<" is       : "<<calc.div()<<endl;


    return 0;
}