#include<iostream>
using namespace std;

int main(){
	int n;
	int s = 1;
	cout<<"Nhap vao so nguyen bat ky :"<<endl;
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		s *= i;
	}
	cout<< "Ket qua la :"<<s<<endl;
}
