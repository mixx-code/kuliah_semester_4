#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct mahasiswa{
    string nama;
    string jurusan;
    float ipk;
};

int main(){

    mahasiswa mhs;

    cout<<"MASUKKAN DATA MAHASISWA"<<endl;
    cout<<"-----------------------"<<endl;

    cout << "Masukkan Nama\t\t: ";
    getline(cin, mhs.nama);
    cout << "Masukkan Jurusan\t: ";
    getline(cin,mhs.jurusan);
    cout << "Masukkan IPK\t\t: ";
    cin >>mhs.ipk;

    cout<<"DATA MAHASISWA"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"Nama    : "<<mhs.nama<<endl;
    cout<<"Jurusan : "<<mhs.jurusan<<endl;
    cout<<"IPK     : "<<mhs.ipk<<endl;

    return 0;
}
