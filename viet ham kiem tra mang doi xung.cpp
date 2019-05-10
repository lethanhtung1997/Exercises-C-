//viet ham kiem tra mot mang co la mang doi xung k
#include<iostream>
#include<cstdlib>
using namespace std;

void nhapmang(int a[], int n )
{
    for(int i = 0; i < n; i++)
    {
        cout<<"Nhap so phan tu thu "<< i+1 <<endl;
        cin>>a[i];
    }
}
void kiemtramang(int a[],int n)
{
    int kt = 1;
    for(int i = 0; i <= n/2; i++)
    {
        if(a[i]!=a[n-1-i])
        {
            kt = 0 ;
            break;
        }
    }
    if(kt == 1)
    {
        cout<<"\nLa mang doi xung ";
    }
    else
    {
        cout <<"\nKhong pai la mang doi xung ";
    }
    
}
int main()
{
    int c[20];
    int d;
    cout<<"Nhap phan tu vao mang "<<endl;
    cin>>d;
    nhapmang(c,d);
    kiemtramang(c,d);
    return 0;
}

