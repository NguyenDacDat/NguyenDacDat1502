#include "iostream"
#include "math.h"
using namespace std;

char hoten[30],namsinh[30];
float dtb;

void nhap()
{
    cout<<"Nhap ho ten cua sinh vien:";
    cin>>hoten;
    cout<<"Nhap nam sinh cua sinh vien:";
    cin>>namsinh;
    cout<<"Nhap diem trung binh cua sinh vien:";
    cin>>dtb;
}
void xuat()
{
    cout<<"Ho ten cua sinh vien la : "<<hoten<<endl;
    cout<<"Nam sinh cua sinh vien la: "<<namsinh<<endl;
    cout<<"Diem trung binh cua sinh vien = " <<dtb<<endl;
}
int main()
{
    nhap();
    xuat();
    if(dtb>=8)
    {
        cout<<"Xep loai Gioi";
    }
    else if((dtb>=7)&&(dtb<8))
        cout<<"Xep loai Kha";
    else if((dtb>=5)&&(dtb<7))
        cout<<"Xep loai Trung Binh";
    else
    {
        if(dtb<5)
        {
            cout<<"Xep loai Yeu";
        }
    }
}