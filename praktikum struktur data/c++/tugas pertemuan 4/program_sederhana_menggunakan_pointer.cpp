#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int x, *alamatX;
    x = 100;
    alamatX = &x;
    cout << "nilai variabel x :"<<x<<endl;
    cout << "variabel x di simpan pada alamat memori : "<< alamatX <<endl;
    getch();
}
