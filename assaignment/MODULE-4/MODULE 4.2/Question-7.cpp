

#include<iostream>
using namespace std;


class student
{
    public : 
    int roll_no;
    string name;

        
        void roll()
        {
        
        cout<<"Enter Students Name : ";
        cin>> name;
        cout<<"Enter Students Roll No. :";
        cin>> roll_no;
        }
};


class Test : public student
{
    public:

        
        int t1,t2,t3,t4,t5,t6,t7,t8;
        int pr ;

        
        void test()
        {
            cout<<"Enter The Test Marks of - Gujarati : ";
            cin>>t1;
            cout<<"\t\t        - Hindi    : ";
            cin>>t2;
            cout<<"\t\t        - S.S      : ";
            cin>>t3;
            cout<<"\t\t        - science  : ";
            cin>>t4;
            cout<<"\t\t        - Maths    : ";
            cin>>t5;
            cout<<"\t\t        - Sanskrit : ";
            cin>>t6;
            cout<<"\t\t        - Computer : ";
            cin>>t7;
            cout<<"\t\t        - Drawing  : ";
            cin>>t8;


        }
};


class Result : public Test 
{
    public :
        // result function for show the total marks of subjects
        void result()
        {

            cout<<endl<<"**********************************************************************************************************************************************************";

            cout<<endl<<"\n\t\t\t\t\t\t ------> Roll no."<<roll_no<<" "<<name<<"'s Total Mark is : "<<t1+t2+t3+t4+t5+t6+t7+t8<<" <------ ";
            
            cout<<endl<<"\n********************************************************************************************************************************************************";

        }
};

int main()
{
    // give obj object to class Result  
    Result obj;
    obj.roll();
    obj.test();
    obj.result();

    return 0;
}