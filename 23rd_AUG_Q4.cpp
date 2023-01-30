#include<iostream>
using namespace std;
class x
{
    static int a;
    public:
    void count()
    {
        a=a+1;
        cout<<a<<"\t";
    }
}; 

int x::a;

int main()
{
    x x1,x2,x3,x4,x5;
    cout<<"\n";
    x1.count();
    x2.count();
    x3.count();
    x4.count();
    x5.count();
    cout<<"\n\n";
    return 0;
}