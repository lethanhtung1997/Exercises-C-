#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 
using namespace std; 
int giatrimax(int a,int b,int c)
{
     if(a>b)
	 { 
      if(a>c) return(a); 
      else return(c);
	 } 
     else if(b>c) return(b); 
     else return(c); 
} 
int main(int argc, char *argv[]) 
{ 
  int a,b,c; 
  cout<<"Nhap ba so nguyen:"; 
  cin>>a>>b>>c; 
  cout<<"Gia tri lon nhat="<<giatrimax(a,b,c);cout<<"\n"; 
  return 0;
}
