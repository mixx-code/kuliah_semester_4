#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

    int Nilai[3][4]={{11,12,13,30},{14,15,16,17},{18,19,20,21}};
    int i, jumlah=0;
    float rata_rata;

    //menampilkan
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << Nilai[i][j] << " ";
        }
        cout << endl;
    }
    getch();

}
