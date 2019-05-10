
#include<iostream>
using namespace std;
main()
{
int n;
cout<<"Moi nhap 1 so co 5 chu so : "<<endl;
cin>>n;
int k=n;
int sumTong = 0;
while(k > 0)
{
 int dv = k % 10;
 k=k/10;
sumTong += dv;
}
cout<<"Tong cac chu so trong 1 so la "<<sumTong;
}
