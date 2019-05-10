//bai1
#include<iostream>
using namespace std;
main()
{
	int s=0,s1=0;
	int n;
	cout<< " Nhap vao n : "<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
{
	s+=i;
	s1+=s;
}	
    cout <<"s="<<s1;
}	
