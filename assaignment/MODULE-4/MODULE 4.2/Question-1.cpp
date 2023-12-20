// WAP to Create Simple Calculator using Class

#include<iostream>
using namespace std;

class Cal
{
    int x,y;

    public :
        
        
        int Get()
        {
             
            cout<<"Enter First number :";
            cin>>x;
            cout<<endl<<"Enter Second number :";
            cin>>y;
            return 0;
        }

       
        int Print()
        {
            
            cout<<"Addition of "<<x<<" and "<<y<<" is       : "<<x+y;
            cout<<endl<<"SuBtraction of "<<x<<" and "<<y<<" is    : "<<x-y;
            cout<<endl<<"Multiplication of "<<x<<" and "<<y<<" is : "<<x*y;
            cout<<endl<<"Division of "<<x<<" and "<<y<<" is       : "<<x/y;
            return 0;
        }
};

int main()
{
    
    Cal obj;

    obj.Get();
    obj.Print();

    return 0;
}