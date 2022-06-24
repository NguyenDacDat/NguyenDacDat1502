#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int coso,somu;
    int luythua=1;
    cout<<"Nhap gia tri co so:"<<endl;
    cin>>coso;
    cout<<"Nhap gia tri so mu:"<<endl;
    cin>>somu;
    for(int i=1;i<=somu;i++)
    {
        luythua=luythua*coso;
    }
    cout<<"Ket qua : " << coso << "^" << somu << "=" << luythua <<endl;
}