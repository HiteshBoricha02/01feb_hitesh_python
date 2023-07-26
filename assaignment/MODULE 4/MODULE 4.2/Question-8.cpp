    // Write a program to Mathematic operation like Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

    #include<iostream>
    using namespace std;

    class Calculation
    {
        public:

                // different functions for different calculations & parameters 
                void addition(int x, int y,int z )
                {
                    cout<<"Addition of "<<x<<","<<y<<" and "<<z<<" is        : "<<x+y+z;
                }

                void subtraction(int x,int y)
                {
                    cout<<endl<<"Subtraction of "<<x<<" and "<<y<<" is       : "<<x-y;
            }

        void mul(float x, float y, float z)
        {
            cout<<endl<<"Multiplication of "<<x<<","<<y<<" and "<<z<<" is  : "<<x*y*z;
        }

        void div(float x, float y)
        {
            cout<<endl<<"Division of "<<x<<" and "<<y<<" is          : "<<x/y;
        }
};
int main()
{
    // obj is object of class
    Calculation obj;

    int x,y,z;
    float x,y,z;

    // to enter integer value
    cout<<"Enter First Value : ";
    cin>>x;
    cout<<endl<<"Enter Second value : ";
    cin>>y;
    cout<<endl<<"Enter Third value : ";
    cin>>z;

    cout<<"   ------   ";

    // to enter float value
    cout<<endl<<"Enter First Float Value : ";
    cin>>x;
    cout<<endl<<"Enter Second Float value : ";
    cin>>y;
    cout<<endl<<"Enter Third Value : ";
    cin>>z;

    // sends value to class member
    obj.addition(x,y,z);
    obj.subtraction(x,y);
    obj.mul(x,y,z);
    obj.div(x,y);

    return 0;
}