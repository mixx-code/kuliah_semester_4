#include <iostream>
#include <conio.h>
using namespace std;
main ()
{
    int x = 10;
    int i;
    int *xPtr;
    xPtr = &x;
    while(i <= 5){
        cout << "nilai  x ke-"<< i+1 << " = " << *xPtr <<endl;
        cout << "alamat x ke-"<< i+1 << " = " << &x <<endl;
        i++;
    }
    return 0;
}
