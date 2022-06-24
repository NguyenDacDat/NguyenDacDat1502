#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    cout<<"Nhap gia tri c:";
    cin>>c;

    if(a<b+c||b<a+c||c<a+b)
    {
        if(a*a>=b*b+c*c||b*b>=a*a+c*c||c>=a*a+b*b)
            cout<<"Day la tam giac vuong";
        
        else if(a==b&&b==c)
            cout<<"Day la tam giac deu";
        else if(a==b||b==c||a==c)
            cout<<"Day la tam giac can";
        else if(a*a>b*b+c*c||b*b>a*a+c*c||c*c>a*a+b*b)
            cout<<"Day la tam giac tu";
        else
        {
            cout<<"Day khong phai 3 canh cua tam giac";
        }
    }
}