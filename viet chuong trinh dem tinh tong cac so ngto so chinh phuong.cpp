#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cout<<" Nhap so phan tu vao mang \n";
	cin>>n;
	int a[n];
	for(int i; i < n; i++)
	{
		cout<<" Nhap phan tu thu "<< i + 1<<"\n";
		cin>>a[i];
	}
	 int sumNt = 0;
	for(int i = 2; i < n; i++)
	{
		for(int j = 2; j*j <= i; j++)
		{
			if(i % j == 0)
			break;
			else if(j + 1 > sqrt(i))
			{
				cout<<"Mang co "<<i<<" so nguyen to. \n";
			}	
			sumNt += i;
			 cout<<"Tong so nguyen to trong mang la : "<< sumNt;
		}
    }
   
 
  
  for(int i; i < n; i++)
  {
  	if(i == sqrt(i)* sqrt(i))
  	{
  	    cout<<" Mang co so chinh phuong \n ";	
	}
	else 
	cout<<" Khong phai la so chinh phuong";
  }
}
