#include<iostream>
using namespace std;
main()
{
	int n;
	cout << "Nhap vao so phan tu cua mang: " << endl;
	cin >> n;
	int a[n];
	for(int i; i < n; i++)
	{
		cin >> a[i];
	}
	int max=0;
	for(int i;i<20;i++)
	{
		if (max<a[i])
		{
		 max=a[i];
		}
	}
	cout<<"So lon nhat la : "<<max<<endl;
	int min=0;
	for(int i;i<20;i++)
	{
     if(min>a[i])
		{
	     min=a[i];
		}
	}
     cout<<" So be nhat la : "<<min<<endl;
     int msita;
     cout<<"Sap xep tu lon den be la : "<<endl;
     for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				msita = a[j];
				a[j] = a[i];
				a[i] = msita;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}	
	cout<<endl;
	cout<<"Sap xep tu nho den lon la : "<<endl;
	for(int i=0;i<n-1;i++)
	{
	for(int j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		      msita = a[j];
			  a[j] = a[i];
			  a[i] = msita;
		}
	}
	}
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout<<endl;
}
