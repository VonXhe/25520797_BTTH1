#include <iostream>
using namespace std;
int ucln(int tu,int mau){
    int tem=1;
    while(tem!=0){
        tem=tu%mau;
        tu=mau;
        mau=tem;
    }
    return tu;
}
int main()
{
    // dau vao: tu, mau
    int tu1, mau1;
    cin>> tu1>>mau1;
    if(mau1<0){
        tu1=-tu1;
        mau1=-mau1;
    }
    int ucl;
    //tinh ucln
    ucl=ucln(tu1,mau1);
    //chia tu, mau cho ucln
    tu1=tu1/ucl;
    mau1=mau1/ucl;
    cout<<tu1<<"\n";
    cout<<mau1;
    return 0;
}