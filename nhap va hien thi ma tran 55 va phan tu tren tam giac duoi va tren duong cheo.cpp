#include<iostream>
using namespace std;

int main()
{
	int a[5][5];
	
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		if(i == j) a[i][j] = 0;
		else if (i > j) a[i][j] = -1;
		else a[i][j] = 1;
	}
	cout<<" Ma tran vua nhap la :\n";
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	return 0;
}
