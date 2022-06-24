#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int a,b,c;
    float r,h;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";	
    cin>>b;
    cout<<"Nhap gia tri c:";
    cin>>c;
    cout<<"Nhap gia tri r:";
    cin>>r;
    cout<<"Nhap gia tri h:";
    cin>>h;

    float tuso=(a+b)*(b-2*c+3);
    cout<<"Ket qua cua tu so= " <<tuso<<endl;
    float mauso=(r/2*h)-9*(a-1);
    cout<<"Ket qua cua mau so = "<<mauso<<endl;

    float ketqua = tuso/mauso;
    cout<<"Ket qua = " <<ketqua<<endl;
}