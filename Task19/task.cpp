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
    
    if(a>=b+c||b>=a+c||c>=a+b)
    {
        cout<<"Day khong phai la 3 canh cua tam giac"<<endl;
    }
    else
    {
        cout<<"Day la 3 canh cua tam giac"<<endl;
    }
}