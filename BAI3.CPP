#include <iostream>
using namespace std;
int main()
{
//nhập 2 phân số
    long double tu1, mau1, tu2, mau2;
    cin>>tu1>> mau1>> tu2>> mau2;
    long double pso1= tu1/mau1;
    long double pso2= tu2/mau2;
    long double tong= pso1+pso2;
    long double hieu= pso1-pso2;
    long double tich= pso1*pso2;
    long double thuong= pso1/pso2;
    cout<<tong<<"\n";
    cout<<hieu<<"\n";
    cout<<tich<<"\n";
    cout<<thuong;
//in ra tổng hiệu tích thương
}
