#include "iostream"
#include "math.h"
using namespace std;

float max(float a,float b,float c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
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
    cout<<"Gia tri lon nhat = "<<max(a,b,c)<<endl;
}