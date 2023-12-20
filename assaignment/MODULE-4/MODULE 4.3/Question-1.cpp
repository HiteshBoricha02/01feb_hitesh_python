// Write a program of to swap the two values using templates

#include<iostream>
using namespace std;
//  template 
template <typename swap>

// Create class  
class Template
{
    public :
         
        Template (swap x , swap y)
            {
                
                cout<<"Multiplication of "<<x<<" and "<<y<<" is : "<<x*y<<endl;
            }
};

int main()
{
    //  scan value  
    int x,y;

    cout<<"Enter First number : ";
    cin>>x;
    cout<<"Enter Second number : ";
    cin>>y;

    
    Template <int> obj(x,y);

    return 0;
}