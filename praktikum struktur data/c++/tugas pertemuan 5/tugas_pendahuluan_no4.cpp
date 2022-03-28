#include <iostream>
using namespace std;

void LuasPersegi(int *panjang, int *lebar)

{
 int a = &panjang;
 int b = &lebar;

 cout << "Masukkan panjang  : "; cin >> a;
 cout << "Masukkan lebar    : "; cin >> b;

 tukar(&a,&b);

 cout << "panjang   = "; cin >> a;
 cout << "lebar     = "; cin >> b;

 cout<<"Keliling persegi: " << panjang + lebar);
}

int main()
{
 KelilingPersegi();
 return 0;
}
