#include "iostream"
#include "math.h"
using namespace std;
float max(float a, float b)
{
    return a > b ? a : b;
}

int main()
{
    int a,b;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    max(a,b);
    cout<<"Gia tri lon nhat = " << max(a,b) << endl;
}