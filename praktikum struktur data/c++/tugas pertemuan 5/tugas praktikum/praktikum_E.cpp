<<<<<<< HEAD
    #include<stdio.h>
    #include<iostream>
    #include<iomanip>
    #include<conio.h>
    using namespace std;
    const int N=100 ;
    void Baca (int Nilai [ ], int &M) ;
    void Cetak (int Nilai [ N ], int &M);
    void Jumlah (int Nilai [ N ], int &M, int &Jlh, float &Rata) ;
    main ()
    {
    int M;
    int Nilai [N];
    int Jlh =0;
    float Rata;
    cout<<"Banyak Elemen : ";
    Baca (Nilai, M); //memanggil fungsi Baca
    cout<<"\nElemen Elemen :";
    Cetak(Nilai,M); //memanggil fungsi cetak
    Jumlah (Nilai, M, Jlh, Rata) ; //memanggil fungsi Jumlah
    cout<<"\Jumlah Bilangan : "<<Jlh;
    cout<<"\nRata-Rata Bilangan :"<<Rata;
    getch ( ) ;
    }
    void Cetak (int Nilai [], int &M)
    {
    int i;
    for(i=0;i<M;i++)
    {
    cout<<setw (3) <<Nilai [ i ] ;
    }
    }
    void Baca (int Nilai [], int & M)
    {
    int i ;
    for (i=0;i<M;i++)
    {
    cout<<"Elemen ke-"<<i<<" : ";
    cin>>Nilai [i];
    }
    }
    void Jumlah (int Nilai [], int &M, int &Jlh, float &Rata)
    {
    int i;
    for (i=0;i<M;i++)
    Jlh+=Nilai [i] ;
    Rata = (float) Jlh /M;
    }
=======
#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
const int N=100 ;
void Baca (int Nilai [ ], int &M) ;
void Cetak (int Nilai [ N ], int &M);
void Jumlah (int Nilai [ N ], int &M, int &Jlh, float &Rata) ;
main ()
{
 int M;
 int Nilai [N];
 int Jlh =0;
 float Rata;
 cout<<"Banyak Elemen : ";
Baca (Nilai, M); //memanggil fungsi Baca
 cout<<"\nElemen Elemen :";
 Cetak(Nilai,M); //memanggil fungsi cetak
 Jumlah (Nilai, M, Jlh, Rata) ; //memanggil fungsi Jumlah
 cout<<"\Jumlah Bilangan : "<<Jlh;
 cout<<"\nRata-Rata Bilangan :"<<Rata;
 getch ( ) ;
}
void Cetak (int Nilai [], int &M)
{
 int i;
 for(i=0;i<M;i++)
 {
 cout<<setw (3) <<Nilai [ i ] ;
 }
}
void Baca (int Nilai [], int & M)
{
 int i ;
 for (i=0;i<M;i++)
 {
 cout<<"Elemen ke-"<<i<<" : ";
 cin>>Nilai [i];
 }
}
void Jumlah (int Nilai [], int &M, int &Jlh, float &Rata)
{
 int i;
 for (i=0;i<M;i++)
 Jlh+=Nilai [i] ;
 Rata = (float) Jlh /M;
}
>>>>>>> 1363e302aa2a766a1f20f3c659c1f4ac3fc5f6b7
