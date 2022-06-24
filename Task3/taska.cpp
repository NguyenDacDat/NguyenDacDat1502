#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"Ket qua sau khi hoan doi a = " << a << endl;
    cout<<"Ket qua sau khi hoan doi b = " << b << endl;
}