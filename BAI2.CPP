#include <iostream>
using namespace std;
int main()
{
    //đầu vào 2 phân số
    long long tu1, mau1, tu2, mau2;
    cin>>tu1>> mau1>> tu2>> mau2;
//nếu mẫu =0
    if(mau1 == 0 || mau2 == 0){
        cout << "Khong hop le";
        return 0;
    }
    //phân số nào lớn hơn hay bằng thì in ra, nhân chéo thay vì chia rồi so sánh để tránh sai số
    if(tu1 * mau2 > tu2 * mau1){
        cout << tu1 << "\n" << mau1;
    }
    else if(tu2 * mau1 > tu1 * mau2){
        cout << tu2 << "\n" << mau2;
    }
    else{
        cout << "Hai phan so bang nhau";
    }
    return 0;
}
