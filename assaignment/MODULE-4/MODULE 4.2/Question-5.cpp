

   #include<iostream>
   using namespace std;
   
   class cricketer
   {
      public :
         int  totalruns , bestperformance,matches, averageruns;
         char name[10];

         
         void data()
            {
               cout<<"Enter Cricketers name : ";
               cin>>name;
               cout<<"\nEnter Total Runs of "<<name<<" : ";
               cin>>totalruns;
               cout<<"\nHow Many Matches "<<name<<" Played ? ";
               cin>>matches;

                      
            }   

         
            void average()
            {
               averageruns = totalruns / matches;

               
            }
   };

   
   class batsman : public  cricketer
   {
      public: 
         
            
            void show()
            {

               cout<<endl<<"Name of Cricketer is : "<<name<<endl;
               cout<<"Total run of "<<name<<" is "<<totalruns<<endl;
               cout<<name<<" Played Total "<<matches<<" Matches in his Career."<<endl;
               cout<<"And Average runs of "<<name<<" is "<<averageruns;
            }      
   };
int main()
{
   // give obj objects to batsman class 
   batsman obj;
   obj.data();
   obj.average();
   obj.show();

   return 0;
}