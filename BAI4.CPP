#include <iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
int daysinmonth(int month, int year){
    int dim=0;
    if(month==1){
        dim=31;
    }
    if(month==2){
        if((year%4==0&&year%100!=0) || year %400==0){
            dim=29;
        }
        else{
            dim=28;
        }
    }
    if(month==3){
        dim=31;
    }if(month==4){
        dim=30;
    }if(month==5){
        dim=31;
    }
    if(month==6){
        dim=30;
    }
    if(month==7){
        dim=31;
    }
    if(month==8){
        dim=31;
    }if(month==9){
        dim=30;
    }if(month==10){
        dim=31;
    }
    if(month==11){
        dim=30;
    }if(month==12){
        dim=31;
    }
    return dim;
}
int main()
{
    date ngay;
    cin>>ngay.day>>ngay.month>>ngay.year;
    int dim=daysinmonth(ngay.month, ngay.year);
    ngay.day+=1;
    if( ngay.day>dim){
        ngay.day=1;
        ngay.month+=1;
    }
    if(ngay.month>12)
    {
        ngay.month=1;
        ngay.year+=1;
    }
    cout<< ngay.day<<"/"<<ngay.month<<"/"<<ngay.year;
}
