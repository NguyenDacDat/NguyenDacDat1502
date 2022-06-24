#include "iostream"
#include "math.h"
using namespace std;

float tbc(int a,int b,int c)
{
    return (a+b+c)/3.0f;
}
int main()
{
    float a,b,c;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    cout<<"Nhap gia tri c:";
    cin>>c;
    tbc(a,b,c);
    cout<<"Ket qua="<<tbc(a,b,c)<<endl;
}