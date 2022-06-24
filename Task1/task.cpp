#include "iostream"
#include "math.h"
using namespace std;

float chuyendoi(float degrees)
{
    float Pi = 3.141592653589;
    return (degrees * Pi/180);
}
int main()
{
    float a,b;
    cout<<"Nhap canh 1:";
    cin>>a;
    cout<<"Nhap canh 2:";
    cin>>b;
    float degrees = 90;
    float radians = chuyendoi(degrees);
    int S;
    S = 0.5*a*b*sin(radians);
    cout<<"Dien tich tam giac = "<<S;
}