#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int a,b;
    cout<<"Nhap gia tri a:";
    cin>>a;
    cout<<"Nhap gia tri b:";
    cin>>b;
    if((a==0)&&(b==0))
    {
        cout<<"Phuong trinh vo so nghiem"<<endl;
    }
    else if((a==0)&&(b!=0))
    {
        cout<<"Phuong trinh vo nghiem"<<endl;
    }
    else
    {
        if(a!=0)
        {
            int  x = -b/a;
            cout<<"Phuong trinh co 1 nghiem duy nhat x = -b/a"<< " = "<< x << endl;
            cin>>a>>b>>x;
        }
    }
}