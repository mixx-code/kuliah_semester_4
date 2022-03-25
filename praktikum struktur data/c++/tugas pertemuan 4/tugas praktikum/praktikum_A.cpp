#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
    int x=8, y;
    int *xPtr;
    xPtr = &x;
    cout << "NiIai	x	= " << x <<endl ;
    cout << "AIamat	x	= " << &x <<endl ;
    cout << "AIamat	x	= " << xPtr <<endl ;
    cout << "Nilai yang disimpan pada alamat ";
    cout << xPtr<<" adalah "<< *xPtr;
    getch();
}
