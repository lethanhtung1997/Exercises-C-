#include <iostream>
using namespace std;

int main() {

int n;
   cout << " Nhap vao so bat ky: ";
   cin >> n;
   bool isPrime = true;
   for (int i = 2; i < n / 2; ++i) {
       if (n %2 == 0)
   {
      isPrime  = false;
      break;
   }
   }
      cout << isPrime <<"La so nguyen to" <<i<< "khong phai so nguyen to" <<endl;
   }
