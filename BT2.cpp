#include <iostream>
using namespace std;
int main()
{
    //đầu vào 2 phân số
    long double tu1, mau1, tu2, mau2;
    cin>>tu1>> mau1>> tu2>> mau2;
    //phân số nào lớn hơn thì in ra
    if((tu1/mau1)>(tu2/mau2)){
        cout<<tu1<<"\n"<<mau1;
    }
    if((tu2/mau2)>(tu1/mau1)){
        cout<<tu2<<"\n"<<mau2;
    }
    return 0;
}
