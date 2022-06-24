#include "iostream"
#include "math.h"
using namespace std;

float ketqua(float a,float b)
{
    return exp(log(a)*(float)1/b);
}
int main()
{
    float x,n;
    cout<<"Nhap gia tri x n : ";
    cin>>x>>n;
    ketqua(x,n);
    cout<<"Gia tri = " << ketqua(x,n)<<endl;
}