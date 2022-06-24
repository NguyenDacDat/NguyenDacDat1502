#include "iostream"
#include "math.h"
using namespace std;

float tuso(float a,float b,float c,float x,float y)
{
    float t = abs(a*x+b*y+c);
    return t;

}
float mauso(float a,float b,float c,float x,float y)
{
    float m = sqrt(a*a+b*b);
    return m;
}
int main()
{
    int a,b,c,x,y;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    cout<<"Nhap gia tri c:";
    cin>>c;
    cout<<"Nhap gia tri x:";
    cin>>x;
    cout<<"Nhap gia tri y:";
    cin>>y;
    
    float h = tuso(a,b,c,x,y)/mauso(a,b,c,x,y);
    cout<<"Khoang cach = " << h << endl;
}