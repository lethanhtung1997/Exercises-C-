//bai3
#include<iostream>
using namespace std;
main()
{
  double s=0;
  double s3=0;
  int n;
  cout<<"Nhap vao n :"<<endl;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
  s+=(double)1/i;
  s3+=s;
  }
  cout<<"s="<<s3;
}
