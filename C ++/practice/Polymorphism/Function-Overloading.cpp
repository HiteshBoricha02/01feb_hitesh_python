#include<iostream>
using namespace std;
class Poly
{
public:
    // Same name but different parameter
    int add(int a, int b)
    {
        cout<<"Addition of the two value is:"<<a+b<<endl;
        return 0;
    }
    int add(int a, int b, int c)
    {
        cout<<"Addition of the three value is:"<<a+b+c;
        return 0;
    }

};
int main()
{
    Poly obj;
    obj.add(22, 25);
    obj.add(22,23,34);
    return 0;
}