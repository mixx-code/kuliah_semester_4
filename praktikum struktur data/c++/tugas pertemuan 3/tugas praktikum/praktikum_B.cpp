#include<iostream>
#include<conio.h>
using namespace std;
struct Tinggal {
 char Jaln [40] ;
 char Kota [50] ;
 char Pos [10] ;
};
struct Tgl_Lahir {
 int Tanggal ;
 int Bulan ;
 int Tahun ;
};
struct Mahasiswa {
 char Nim [15];
 char Nama [25];
 Tinggal Alamat;
 Tgl_Lahir Lahir;
};
int main ( )
{
 Mahasiswa Mhs ;
 cout<<"NIM : "; cin.getline (Mhs.Nim, 15 ) ;
 cout<<"Nama : "; cin.getline (Mhs.Nama, 25 ) ;
 cout<<"Alamat : \n" ;
 cout<<"\tJalan : "; cin.getline ( Mhs.Alamat.Jaln, 40 ) ;
 cout<<"\tKota : "; cin.getline ( Mhs.Alamat.Kota, 50 ) ;
 cout<<"\tKode pos : "; cin.getline ( Mhs.Alamat.Pos, 10 ) ;
 cout<<"Tanggal Lahir : \n";
 cout<<"\tTanggal : "; cin >>Mhs.Lahir.Tanggal ;
 cout<<"\tBulan : "; cin>>Mhs.Lahir.Bulan ;
 cout<<"\tTahun : "; cin>>Mhs.Lahir.Tahun ;
 cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";
 cout<<"NIM : "<<Mhs.Nim ;
 cout<<"\nNama : "<<Mhs.Nama ;
 cout<<"\nAlamat : \n";
 cout<<"\n\tJalan : "<<Mhs.Alamat.Jaln;
 cout<<"\n\tKota : "<<Mhs.Alamat.Kota;
 cout<<"\n\tKode Pos : "<<Mhs.Alamat.Pos;
 cout<<"\nTanggal Lahir : "<<Mhs.Lahir.Tanggal<<"-";
 cout<<Mhs.Lahir.Bulan<<"-"<<Mhs.Lahir.Tahun;
 getch ();
}

