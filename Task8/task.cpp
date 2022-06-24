#include "iostream"
#include "math.h"
using namespace std;

float dientich(float r)
{
    float Pi = 3.14159265;
    float S = r * Pi;
    return S;
}
float chuvi(float r)
{
    float Pi = 3.14159265;
    float C = r*r*Pi;
    return C;
}
int main()
{
    int r;
    cout<<"Nhap gia tri ban kinh : ";
    cin>>r;
    cout<<"Dien tich duong tron = " << dientich(r)<<endl;
    cout<<"Chu vi duong tron = " << chuvi(r)<<endl;
}