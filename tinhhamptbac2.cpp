#include<iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
float ptbac2(float a, float b, float c);
int main()
{
	float a, b, c, delta, x1, x2;
	cout<<"Phuong trinh bac 2 co dang ax^2+bx+c=0 "<<endl;
	cout<<"Nhap vao a : "<<endl;
	cin>>a;
	cout<<"Nhap vao b : "<<endl;
	cin>>b;
	cout<<"Nhap vao c : "<<endl;
	cin>>c;
	float result = ptbac2(a, b, c);
}


float ptbac2(float a, float b, float c){
	float x1, x2, delta, result;
	if(a==0)
	{
		if(b==0)
		{
			if(c==0)
			{
				cout<<"Phuong trinh vo so nghiem!";
			}
			else
			{
				cout<<"Phuong trinh vo nghiem!";
			}
		}
		else
		{
			x1=-b/c;
			cout<<"Phuong trinh co 1 nghiem x = "<<x1<<endl;
		}
	}
	else
	{
		delta=b*b-4*a*c;
		if(delta<0)
		{
			cout<<"Phuong trinh vo nghiem!";
		}
		if(delta==0)
		{
			x1=-b/(2*a);
			cout<<"Phuong trinh da nghiem kep:"<<x1<<endl;
		}
		if(delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			cout<<"Phuong trinh co 2 nghiem phan biet "<<endl;
			cout<<"x1= "<<x1<<endl;
			cout<<"x2= "<<x2<<endl;
		}
	}
	return result;
}

