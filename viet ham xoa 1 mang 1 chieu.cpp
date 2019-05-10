#include<iostream>
#include<cstdlib>
using namespace std;

void NhapMang(int a[], int n )
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Nhap so phan tu thu "<< i+1 <<"\n";
        cin>>a[i];
    }
}
void XoaMang(int a[],int n)
 {
    int vitri;
	cout<<"Moi ban nhap chi so can xoa : \n";
	cin>>vitri;
	for(int i = vitri; i < n - 1; i++)
	{
		a[i]=a[i+1];
	}
	n--;
	cout<<"Mang sau khi bi xoa la : \n";
	for(int i=0 ;i < n; i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
    int c[20];
    int d;
    cout<<"Nhap phan tu vao mang \n";
    cin>>d;
    NhapMang(c,d);
    XoaMang(c,d);
    return 0;
}
