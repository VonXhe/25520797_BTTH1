#include <iostream>
using namespace std;
int main()
{
//nhập 2 phân số
    long long tu1, mau1, tu2, mau2;
    cin>>tu1>> mau1>> tu2>> mau2;
    if(mau1 == 0 || mau2 == 0){
        cout << "Khong hop le";
        return 0;
    }
    // Tổng (tất cả dùng công thức quy đồng để ko sai số
    cout << tu1*mau2 + tu2*mau1 << "\n";
    cout << mau1*mau2 << "\n";

    // Hiệu
    cout << tu1*mau2 - tu2*mau1 << "\n";
    cout << mau1*mau2 << "\n";

    // Tích
    cout << tu1*tu2 << "\n";
    cout << mau1*mau2 << "\n";

    // Thương
    if(tu2 == 0){
        cout << "Khong chia duoc\n";
    } else {
        cout << tu1*mau2 << "\n";
        cout << mau1*tu2;
    }
//in ra tổng hiệu tích thương
}
