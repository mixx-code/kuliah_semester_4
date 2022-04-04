#include <iostream>
#include <conio.h>
using namespace std;

void tukar( string *a, string *b);

main()
{
     string a,b;
    cout << "Masukkan username      : ";
    cin >> a;
    cout << "Masukkan password      : ";
    cin >> b;
    cout << endl;
    cout    << "nilai a dan b seblumnya        : " << a << " & " << b;
    tukar(&a,&b);
    cout    << "\nnilai a dan b setelah ditukar  : " << a << " & " << b;
    getch();
}
void tukar( string *x, string *y)
{
    string z;
    z = *x;
    *x = *y;
    *y = z;

}
