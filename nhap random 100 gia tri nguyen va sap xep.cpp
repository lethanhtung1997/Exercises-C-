#include <iostream> 
#include <cstdlib> 
#include <ctime> 

using namespace std;
int main()
{
    int n;
    cout<<" Nhap so phan tu vao mang : "<<endl;
    cin>>n;
    int a[n];
    for(int i; i < n; i++)
    {
    	cout<<" Nhap so phan tu thu "<<i+1<<endl;
    	cin>>a[i];
	}
	srand(time(0));
    for(int i ; i < n; i++)
    {
        a[i] = rand() % 101;  
    }
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
       if(max < a[i])
       {
       	max = a[i];
	   }
    }
    cout<<"Gia tri lon nhat cua mang la "<<max<<endl;
    int min = a[0];
    for(int i ;i < n; i++)
    {
    	if(min > a[i])
    	{
    		min = a[i];
		}	
	}
	cout<<"\nGia tri nho nhat cua mang la "<<min;
    int array[100],t;
  for(int x=0;x<100;x++)
  {
      cout << "\nNhap so nguyen thu " << x+1 << " : " << endl;
      cin>>array[x];
  }
    for (int x=0;x<100;x++)
{
    for(int y=0;y<99;y++)
  {    
     if(array[y]>array[y+1])
   {
      t=array[y];
      array[y]=array[y+1];
      array[y+1]=t;
   }
 }
}
cout << "Thu tu tang dan cua mang la : ";
for (int x=0;x<100;x++)
{
cout << endl << array[x];
int max = 0 ;
int count = 0;
for(int i = 0; i<99; i++)
{
	if (i != 0) 
	{
		if (array[i] != array[i - 1]) 
		{
			count = 0;
		}
	}
	
	if (array[i] == array[i + 1]) 
	{
		count++;
	}
	if(count > max)
	{
	 	max = count;
    }
cout<<" Tan suat xuat hien nhieu nhat "<<count;
}
cout<<"\n";
return 0 ;
}
}
