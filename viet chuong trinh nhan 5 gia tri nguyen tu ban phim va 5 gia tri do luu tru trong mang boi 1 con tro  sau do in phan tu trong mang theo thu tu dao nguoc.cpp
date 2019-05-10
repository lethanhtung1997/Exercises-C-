//viet chuong trinh nhan 5 gia tri nguyen tu ban phim va 5 gia tri do luu tru trong mang boi 1 con tro, sau do in phan tu trong mang theo thu tu dao nguoc...
#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *p = arr;
	cout<<"Nhap 5 gia tri : \n";
	cin>>*p >> *(p+1) >> *(p+2) >> * (p+3) >> * (p+4);
	cout<<"Cac so ban vua nhap theo thu tu dao nguoc : \n";
	for(int i=4; i >= 0; i--)
	{
		cout<< *(p+i)<<"\n";
	}
	return 0;
}

