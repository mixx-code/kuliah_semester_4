#include<conio.h>
#include<iostream>
using namespace std;
struct Mahasiswa
{
 char Nim [50] ;
 char Nama [25] ;
 char Alamat [40] ;
 int Umur ;
} ;
main ()
{
Mahasiswa Mhs [2] ;
 int i ;
 for (i =0; i<2; i++ )
 {
 cout<<"Nim : ";
 cin >> Mhs[i].Nim ;
 cout <<"Nama :";
 gets(Mhs[i].Nama);
 cin.getline(Mhs[i].Nama,25) ;
 cout<<"Alamat : ";
 cin.getline(Mhs[i].Alamat,40) ;
 cout<<"Umur : ";
 cin>>Mhs[i].Umur ;
 }
 for( i =0; i<2; i++ )
 {
 cout<<"\n\nNim : "<<Mhs [i].Nim;
 cout<<"\n\nNama : "<<Mhs [i].Nama;
 cout<<"\n\nAlamat : "<<Mhs [i].Alamat;
cout<<"\n\nUmur : "<<Mhs [i].Umur;
 }
 return 0;
 getch;
}
