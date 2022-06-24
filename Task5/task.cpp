#include "iostream"
#include "math.h"
using namespace std;

float nuachuvi(float a,float b,float c)
{
    float p;
    return p = 0.5*(a+b+c);
}
float dientich(float a,float b,float c)
{
    float p = 0.5*(a+b+c);
    float S = sqrt((p)*(p-a)*(p-b)*(p-c));
    return S;
}
int main()
{
    float a,b,c,p,S;
    cout<<"Nhap gia tri a:"<<endl;
    cin>>a;
    cout<<"Nhap gia tri b:"<<endl;
    cin>>b;
    cout<<"Nhap gia tri c:"<<endl;
    cin>>c;
    cout<<"Gia tri cua nua chu vi = " <<nuachuvi(a,b,c)<<endl;
    cout<<"Gia tri cua dien tich  = " <<dientich(a,b,c)<<endl;
}