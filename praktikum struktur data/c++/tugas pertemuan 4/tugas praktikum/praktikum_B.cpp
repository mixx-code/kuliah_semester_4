#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int x=8, y;
    int *xPtr;
    xPtr=&x;
    cout << "Nilai x\t: "<<x<<endl;
    cout << "Alamat x\t: "<<&x<<endl;
    cout << "Alamat x\t: "<<xPtr<<endl;
    cout << "Nilai yang disimpan pada  alamat"<<endl;
    cout << xPtr <<"Adalah "<<y<<endl;
    getch();

}

