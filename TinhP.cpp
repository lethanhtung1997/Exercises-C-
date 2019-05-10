#include<iostream>
using namespace std;
main()
{
int n;
int P=1;
cout<<"Nhap vao n :"<<endl;
cin>>n;
for(int i=1; i<=n; i++)
    {
	P=P*i;
	}
	cout<<"Tich cac so tu 1 den "<<n<<" la "<<P;
}
