#include <iostream>
#include <math.h>
using namespace std;

float SoLon(int a,int b)
{
    return (a+b)/2.0f;
}
float SoBe(int a,int b)
{
    return (a-b)/2.0f;
}
int main()
{
    int a,b;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    cout<<"So lon = " << SoLon(a,b)<<endl;
    cout<<"So be  = " << SoBe(a,b)<<endl;
}