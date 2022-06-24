#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int a;
    cout<<"Nhap gia tri a:";
    cin>>a;
    if(a>0)
    {
        cout<<"a la so duong = " << a << endl;
    }
    else if(a==0)
    {
        cout<<"a la so 0 " << endl;
    }
    else
    {
        cout<<"a la so am = " << a << endl;
    }
}