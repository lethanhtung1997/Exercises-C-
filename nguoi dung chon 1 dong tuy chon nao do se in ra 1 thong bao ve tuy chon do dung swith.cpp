#include <iostream>
#include <conio.h>
using namespace std; 
int main()
{

int luachon;
cout << "1. Talk" << endl;
cout << "2. Eat" << endl;
cout << "3. Play" << endl;
cout << "4. Sleep" << endl;
cout << "Nhap lua chon cua ban : " << endl;
cin>>luachon;
switch(luachon)
{
case 1 : cout << "Ban da chon talk...buon chuyen qua nhieu khong la thoi quen tot." << endl;
break;
case 2 : cout << "Ban da chon eat...an uong du chat dinh duong la tot cho suc khoe." << endl;
break;
case 3 : cout << "Ban da chon play...choi game nhieu la khong tot." << endl;
break;
case 4 : cout << "Ban da chon sleep...ngu 8 tieng mot ngay la tot cho suc khoe." << endl;
break;
default : cout << "Ban da khong chon lua chon nao...vi the se thoat chuong trinh." << endl;
}
return 0;
}
