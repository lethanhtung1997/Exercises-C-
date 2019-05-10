//viet chuong trinh nhan 5 gia tri nguyen tu ban phim va 5 gia tri do luu tru trong mang boi 1 con tro, sau do in phan tu trong mang do ra..
#include<iostream>
using namespace std;

int main()
{
	int arr[5];
	int *p = arr;
	cout<<"Nhap 5 so \n";
	cin>> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
	cout<<"Cac so ban vua nhap la : \n ";
	for(int i; i < 5; i++)
	{
		cout<< arr[i]<< "\n";
	}
	
	return 0;
}
