//1+1/2+1/3...
#include<iostream>
#include<stdio.h>
using namespace std;
 int main()
{
	double S=0;
	int i,n;
	cout <<"Nhap so n"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++)
	{ 
	 S=S+(double)1/i;
	}
    cout<<"Ket qua la : "<<S;
   	return 0;
}	
