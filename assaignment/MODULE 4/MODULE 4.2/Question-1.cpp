// WAP to Create Simple Calculator using Class

#include<iostream>
using namespace std;

class Cal
{
    int x,y;

    public :
        
        //  function to get value from user
        int Get()
        {
            //Pass Message to user and get value from them 
            cout<<"Enter First number :";
            cin>>x;
            cout<<endl<<"Enter Second number :";
            cin>>y;
            return 0;
        }

       
        int Print()
        {
            // Different Arithmetic operations
            cout<<"Addition of "<<x<<" and "<<y<<" is       : "<<x+y;
            cout<<endl<<"SuBtraction of "<<x<<" and "<<y<<" is    : "<<x-y;
            cout<<endl<<"Multiplication of "<<x<<" and "<<y<<" is : "<<x*y;
            cout<<endl<<"Division of "<<x<<" and "<<y<<" is       : "<<x/y;
            return 0;
        }
};

int main()
{
    // Create class Cal's object name obj
    Cal obj;

    obj.Get();
    obj.Print();

    return 0;
}