#include <iostream>
using namespace std;
//hàm tính ucln, đầu vào tử+ mẫu, đầu ra: ucln, định lí eculid.
//Tính phần dư của tử chia mẫu rồi chuyển mẫu vào tử, lấy chia cho dư đó rồi lặp lại đến khi dư =0 thì dư trước đó là ucln
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
    ucl=ucln(tu1,mau1);
    //chia tu, mau cho ucln
    tu1=tu1/ucl;
    mau1=mau1/ucl;
    cout<<tu1<<"\n";
    cout<<mau1;
    // dau ra tu mau da rut gon
    return 0;
}
