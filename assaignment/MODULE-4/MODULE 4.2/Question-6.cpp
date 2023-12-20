

#include<iostream>
using namespace std;

 
class Person
{
    
    public :

        
        int age;
        string name;
     
        
        void get()
        {
            cout<<"\n\n\t\t\tEnter Name : ";
            cin>> name;
            cout<<"\t\t\tEnter Age : ";
            cin>> age;
        }

        
        void show()
        {
            cout<<"\n\n\t\t\tName :- "<<name;
            cout<<"\n\t\t\tAge  :- "<<age;

        }
};


class Student : public Person 
{
 
    public :

        
         float pr;
        
        
         void gett()
         {
            
            
            get();
            cout<<"\t\t\tEnter Percentage : ";
            cin>>pr;
         }

        
         void showw()
         {

            
            show();
            cout<<"\n\t\t\tPercentage of "<<name<<" is : "<<pr;
         }

};


class Teacher : public Person
{
    public : 

        
        int Salary;

         
        void Gettt()
        {
             
            get();
            cout<<"\t\t\tEnter Teacher Salary : ";
            cin>>Salary;
        }

        
        void Showww()
        {
            
            show();
            cout<<"\n\t\t\tTeacher's Salary is : "<<Salary;
        }
};


int main()
{
    // create object of class Student -> st, Teacher -> te
    Student st;
    Teacher te;

    // for get students info by calling gett()
    cout<<"\n\t\t\t--------------------------------------------------";
    cout<<"\n\n\t\t\t\t --- Enter Student's Details ---";
    st.gett();

    // for get teachers info by calling Gettt()
    cout<<"\n\t\t\t--------------------------------------------------";
    cout<<"\n\n\t\t\t\t --- Enter Teacher's Details ---";
    te.Gettt();

    // for print students info calling showw()
    cout<<"\n\t\t\t<-<-<-<-<-<-<-<-<-<-<-------->->->->->->->->->->->";
    cout<<"\n\n\t\t\t\t  --- Student's Information ---";
    st.showw();

    // for print teachers info by calling Showww()
    cout<<"\n\n\t\t\t<-<-<-<-<-<-<-<-<-<-<-------->->->->->->->->->->->";
    cout<<"\n\n\t\t\t\t  --- Teacher's Information ---";
    te.Showww();

    return 0;
}

