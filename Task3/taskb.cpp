#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int a,b;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    cout<<"Truoc khi hoan doi a = " <<a<< endl;
    cout<<"Truoc khi hoan doi b = " <<b<<endl;
    a = a+b; // a = 12 (10+2)
    a = a-b; // b = 10 (12-2)
    b = a-b; // a = 2 (12-10)
    cout<<"Sau khi hoan doi  a  = " <<a<<endl;
    cout<<"Sau khi hoan doi  b  = " <<b<<endl;
}