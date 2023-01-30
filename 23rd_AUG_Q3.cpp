#include<iostream>
using namespace std;
class FRACTION
{
    public:
    int n1,d1,n2,d2;
    float sum1,sum2,sub1,sub2,mul1,mul2;
    void getdata()
    {
        cout<<"\nEnter the first fraction - \n";
        cout<<"\nNumerator - ";
        cin>>n1;
        cout<<"\nDenominator - ";
        cin>>d1;
        cout<<"\nEnter the second fraction - \n";
        cout<<"\nNumerator - ";
        cin>>n2;
        cout<<"\nDenominator - ";
        cin>>d2;
    }
    void add(FRACTION f11)
    {
        sum1=((f11.d2*f11.n1)+(f11.d1*f11.n2));
        sum2=(f11.d1*f11.d2);
        cout<<"The result after addition is - "<<sum1<<"/"<<sum2<<endl;
    }
    void substract(FRACTION &f22)
    {
        sub1=((f22.d2*f22.n1)-(f22.d1*f22.n2));
        sub2=(f22.d1*f22.d2);
        cout<<"The result after substraction is - "<<sub1<<"/"<<sub2<<endl;
    }
    void multiply(FRACTION f33)
    {
        mul1=((f33.n1)*(f33.n2));
        mul2=((f33.d1)*(f33.d2));
        cout<<"The result after multiplication is - "<<mul1<<"/"<<mul2<<endl<<endl;
    }
};

int main()
{
    FRACTION f1,f2,f3,f4;
    f1.getdata();
    f2.add(f1);
    f3.substract(f1);
    f4.multiply(f1);
    return 0;
}