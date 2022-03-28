#include <iostream>
#include <conio.h>
using namespace std;
<<<<<<< HEAD
main()
{
    int x=8, y;
    int *xPtr;
    xPtr=&x;
    cout << "Nilai x\t: "<<x<<endl;
    cout << "Alamat x\t: "<<&x<<endl;
    cout << "Alamat x\t: "<<xPtr<<endl;
    cout << "Nilai yang disimpan pada  alamat"<<endl;
    cout << xPtr <<"Adalah "<<*xPtr<<endl;
    getch();

=======
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
>>>>>>> 8ed087b4cf1c913b8f4e53cced607e087671bfbc
}
