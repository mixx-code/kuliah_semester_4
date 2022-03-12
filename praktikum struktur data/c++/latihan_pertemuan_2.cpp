#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int Nilai[6];
    int i, jumlah=0;
    float rata_rata;

    //memasukan data ke array
    for(i=1;i<=6;i++){
        cout << "masukan elemen ke- "<<i<<"\t= ";
        cin >> Nilai[i];
    }

    //menghitung jumlah
    for(i=0;i<6;i++)
        jumlah+= Nilai[i];
    rata_rata=(float) jumlah/6;

    //mencatak elemen array
    cout <<  "\nDeretan Bilangan\t= ";
    for(i=0;i<6;i++)
        cout << Nilai[i] << " ";

    //mencetak harga jumlah
    cout << "\nJumlah Bilangan\t\t= " << jumlah;
    cout << "\nRata - Rata Bilangan\t= " << rata_rata;
    getch();

}
