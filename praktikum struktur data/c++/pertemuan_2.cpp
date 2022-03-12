#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int Nilai[10] = {8,12,20,15,7,5,6,4,32,3};
    int i, jumlah=0;
    float rata_rata;

    //menghitung jumlah
    for(i=0;i<10;i++)
        jumlah+= Nilai[i];
    rata_rata=(float) jumlah/10;

    //mencatak elemen array
    cout <<  "\nDeretan Bilangan\t= ";
    for(i=0;i<10;i++)
        cout << Nilai[i] << " ";

    //mencetak harga jumlah
    cout << "\nJumlah Bilangan\t\t= " << jumlah;
    cout << "\nRata - Rata Bilangan\t= " << rata_rata;
    getch();

}
