#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

/*struct Mahasiswa
{
 char Nim [ 20 ] ;
 char Nama [ 25 ] ;
 char Alamat [ 40 ] ;
 short Umur ;
};
*/
void mahasiswa(string *nim, string *nama, string *alamat);
main ( )
{
string nim,nama,alamat;
mahasiswa(&nim,&nama,&alamat)
 cout<<"Membaca Nilai Anggota Struktur \n";
 Baca (Mhs);
 cout<<"\nMencetak Nilai Anggota Struktur ";
 Cetak (Mhs);
 getch ( );
}
void Baca(Mahasiswa &Mhs)
{
 cout<<"NIM : ";
 cin.getline(Mhs.Nim, 20) ;
 cout<<"Nama :";
 cin.getline(Mhs.Nama,25) ;
 cout<<"Alamat :";
 cin.getline(Mhs.Alamat, 40);
 cout<<"Umur :";
 cin>>Mhs.Umur;
}
void Cetak (Mahasiswa &Mhs)
{
 cout<<"\nNim : "<< Mhs.Nim;
 cout<<"\nNama :"<< Mhs.Nama;
 cout<<"\nAlamat :"<< Mhs.Alamat;
 cout<<"\nUmur :"<< Mhs.Umur;
}

