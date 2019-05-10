#include<iostream>
using namespace std;
int main()
{
int thang;
cin>>thang;
switch(thang){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
    case 12:
    	cout <<"Thang"<<thang<<" co 31 ngay!"<<endl;
        break;
    case 2:
    	int nam;
    	cout<<"Nhap nam can kiem tra "<<endl;
    	cin>>nam;
    	if (nam%4==0 && nam%100!=0||nam%400==0)
    	cout<<"Thang"<<thang<<" co 28 ngay!"<<endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    	cout<<"Thang"<<thang<<" co 30 ngay!"<<endl;
        break;
    default:
    	cout <<"Khong hop le!";
    	break;
    	}
}
    	
