#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    float x,y;
    cout<<"Nhap gia tri x:";
    cin>>x;
    cout<<"Nhap gia tri y:";
    cin>>y;
    float tuso=x+y;
    cout<<"Tu so co gia tri = "<<tuso<<endl;
    float mauso= 2.0f+(x/y);
    cout<<"Mau so co gia tri = "<<mauso<<endl;
    
    float ketqua= tuso / mauso;
    cout<<"Ket qua hien thi ra man hinh = " << ketqua << endl;
}