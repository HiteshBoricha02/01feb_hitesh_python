#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string str;
    ofstream out;
    out.open("c:/lern/c++");
    out<<"Hello";
    out.close();
    ifstream in("c:/lern/c++");
    in>>str;
    cout<<str;
    return 0;
}