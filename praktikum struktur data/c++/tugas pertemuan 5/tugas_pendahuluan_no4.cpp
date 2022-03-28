#include <iostream>
using namespace std;

void KelilingPersegi()
{
 int panjang,lebar;

 cout << "Masukkan panjang  : "; cin >> panjang;
 cout << "Masukkan lebar    : "; cin >> lebar;

 cout<<"Keliling persegi: " << 2*(panjang+lebar);
}

int main()
{
 KelilingPersegi();
 return 0;
}
