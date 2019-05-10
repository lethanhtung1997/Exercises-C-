#include <iostream>
using namespace std;
 
int main(){
	int n;
	cout << "Nhap vao so phan tu cua mang: " << endl;
	cin >> n;
	int a[n];
	//nhap vao phan tu cua mang
	for(int i; i < n; i++)
	{
		cout<<"Nhap vao phan tu thu a["<<i+1<<"]"<<"\n";
		cin >> a[i];
	}
	//xuat ra cac phan tu so chan
	cout << endl << "Cac phan tu so chan la: " << endl;
	for(int i; i < n; i++)
	{
		if(a[i]%2==0)
		{
			cout << a[i] << "\t";
		}
	}
	
	for(int i; i < n; i++)
	{
		if (a[i] < 20)
		{
		cout<<" Va so do phai nho hon 20 :"<<a[i]<<"\n";
	    }
	}
	return 0;
}

	
