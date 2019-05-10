#include<iostream>
using namespace std;
main()
{
float a,b,c,trungbinh;
cout<<"Nhap 3 diem la diem bai kiem tra,diem thi giua ki,diem thi cuoi ki lan luot la :"<<endl;
cin>>a>>b>>c;
trungbinh=a+b+c/3;
if(trungbinh>=9.0)
{ 
cout<< "Hang A"<<endl;
}
else if((trungbinh>=7.0)&&(trungbinh<9.0))
{
	cout<<"Hang B"<<endl;
}
else if((trungbinh>=5.0)&&(trungbinh<7))
{
	cout<<"Hang C"<<endl;
	}
else if(trungbinh<5.0)
{
	cout<<"Hang F"<<endl;
	}
	else
	{
		cout<< "Khong co thu hang nao!";
		}
	
}

