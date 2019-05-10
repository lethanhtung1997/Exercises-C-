#include<iostream>
#include<ctype.h>
#include<string.h> 
using namespace std;
 
int main()
{
   
         char t;
         cout<<" Moi nhap 1 ki tu : ";
         cin>>t;
         if ( (t >= 'A') && (t <= 'Z') )
         {
                int k =  int (t) + 32 ;
                cout<< " Ki tu in thuong tuong ung la : " << char(k);
         }
         else if ( (t >= 'a') && (t <= 'z') )
         {
                int k = int (t) - 32;
                cout<< " Ki tu in hoa tuong ung la : "<< char(k);
         }
         else
		 {
		  cout<< " Kieu number khong hop le  " ;
		 }
         cout<< endl;
         system ("pause");
         return 0;
}
