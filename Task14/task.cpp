#include "iostream"
#include "math.h"
using namespace std;

float songuyen(int n)
{
    return n%2==0 ? n:0;
}
int main()
{
    int n;
    cout<<"Nhap gia tri:";
    cin>>n;
    songuyen(n);
    cout<<"Gia tri cua n = " << songuyen(n) << endl;
}