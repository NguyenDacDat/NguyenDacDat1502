#include "iostream"
#include "math.h"
using namespace std;

char thieunien[30],thanhnien[30],trungnien[30],laonien[30];
float n;

void Nhap()
{
    cout<<"Nhap so tuoi";
    cin>>n;
}
void Xuat()
{
    cout<<"So tuoi cua nguoi do la = " << n << endl;
}
int main()
{
    Nhap();
    Xuat();
    if(n<18)
    {
        cout<<"Nguoi nay la thieu nien";
    }
    else if((n>=18)&&(n<39))
        cout<<"Nguoi nay la thanh nien";
    else if((n>=40)&&(n<60))
        cout<<"Nguoi nay la trung nien";
    else
    {
        if(n>60)
        {
            cout<<"Nguoi nay la lao nien";
        }
    }
}