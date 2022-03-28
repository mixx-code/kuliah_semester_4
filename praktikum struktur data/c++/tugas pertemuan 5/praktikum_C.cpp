#include <iostream>
#include <conio.h>
using namespace std;

int Maksimum(int a, int b, int c);
main()
{
    int a=8,b=12,c=-5;
    cout    << "Nilai a = " << a;
    cout    << "\nNilai b = " << b;
    cout    << "\nNilai c = " << c;
    cout    << "\nNilai terbesar = " << Maksimum(a,b,c);
    getch();
}

int Maksimum(int x, int y, int z)
{
    int besar = x;
    if(y > besar)
        besar = y;
    if(z > besar)
        besar = z;
    return(besar);
}
