#include "iostream"
#include "math.h"
using namespace std;

float max(float a,float b,float c,float d)
{
    return a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
}
int main()
{
    float a,b,c,d;
    cout<<"Nhap gia tri a b c d : ";
    cin>>a>>b>>c>>d;
    max(a,b,c,d);
    cout<<"Gia tri lon nhat = "<<max(a,b,c,d)<<endl;
}