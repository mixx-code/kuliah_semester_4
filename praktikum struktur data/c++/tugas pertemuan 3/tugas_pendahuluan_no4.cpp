#include <iostream>
#include <conio.h>
using namespace std;

struct mahasiswa{
    char nama[20];
    char jurusan[20];
    float ipk;
};

int main(){
    mahasiswa mhs[10];
    int i;
    int max;
    cout << "BERAPA DATA YANG AKAN DI MASUKKAN \t: ";
    cin >> max;
    for(i=1;i<=max;i++){
    cout << "DATA MAHASISWA KE -"<<i<<endl;
    cout << "Masukkan Nama \t\t: ";
    cin >> mhs[i].nama;
    cout << "Masukkan Jurusan \t: ";
    cin >> mhs[i].jurusan;
    cout << "Masukkan IPK \t\t: ";
    cin >> mhs[i].ipk;
 }
    cout <<endl;
    cout << "---------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "-------------------------------------";
    cout << "DATA MAHASISWA YANG TELAH DI MASUKKAN";
    cout << "-------------------------------------"<<endl;
    cout << "---------------------------------------------------------------------------------------------------------------"<<endl;

    cout <<endl;
 for(i=1;i<=max;i++){
    cout << "DATA MAHASISWA KE -"<<i<<endl;
    cout << "Nama \t\t: "<<mhs[i].nama<<endl;
    cout << "Jurusan \t: "<<mhs[i].jurusan<<endl;
    cout << "IPK \t\t: "<<mhs[i].ipk<<endl;
 }
return 0;
}

