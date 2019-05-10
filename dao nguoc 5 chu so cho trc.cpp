#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"Moi nhap 1 so co 5 chu so : "<<endl;
cin>>n;
int k = n;
while(k > 0)
 {
   int dv = k % 10;
   k = k / 10;
   cout<<dv; 
 }
}

