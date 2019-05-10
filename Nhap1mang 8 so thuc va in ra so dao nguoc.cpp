#include<iostream>
using namespace std;

 int main()
{
	int a[8];
	for(int i = 0; i <= 8; i++)
	{
		cout<< "Nhap so thuc thu "<< i+1<< " : " <<endl;
		cin>> a[i];
	}
	for(int i=0; i <= 8/2 ; i++)
	{
	    int temp = a[i];
	    a[i] = a[8-1-i];
	    a[8-1-i] = temp;
	
    }
    cout<<" \n In ra so dao nguoc : ";
	for(int i=0; i < 8; i++)
		{
	       cout<< endl << a[i];
	    }
	    cout<<endl;
	    int sum = 0;
	for(int i; i < 8; i++)
	{
		sum += a[i];
	}
	cout << "Tong cac phan tu cua mang la: " << sum << endl;
	return 0 ;
}
