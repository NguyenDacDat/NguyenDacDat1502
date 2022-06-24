#include "iostream"
#include "math.h"
using namespace std;
struct employee
{
    int empID;
    char Hoten[60],Machucvu[60],Chucvu[60];
};
int main()
{
    struct employee emp[3]={{1,"Dat","T","Truong Phong"},{2,"Bo","P","Pho Phong"},{3,"Hoang","V","Nhan vien"}};
    cout<<"Thong tin nhan vien:";
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"empID:"<<emp[i].empID<<endl;
        cout<<"Ho va ten:"<<emp[i].Hoten<<endl;
        cout<<"Ma chuc vu:"<<emp[i].Machucvu<<endl;
        cout<<"Chuc vu:"<<emp[i].Chucvu<<endl;
        cout<<endl;
    }
}
