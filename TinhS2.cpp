//bai2
#include<iostream>

using namespace std;
main()
{
  int s=1,s2=0;
  int n;
  cout<<"Nhap vao n :"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  s*=i;
  s2+=s;
  }
  cout<<"s="<<s2;
}
