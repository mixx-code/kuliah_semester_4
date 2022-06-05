#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
void MaximumSortMenaik()
{
cout<<endl;
cout << "Maximum Sort(menaik)";
cout<<endl;
cout<<endl;
int Nilai [ 20 ];
int i, j , N, l ;
int temp, U, Imaks;
cout<<"Masukan Banyaknya Bilangan :";
cin>>N;
for(i=0; i<N; i++)
{
cout<<"Elemen ke-"<<i<<" : ";
cin>>Nilai [ i ];
}
//Proses Cetak sebelum diurutkan
U=N-1;
for(i=0; i<=N-2; i++)
{
Imaks = 0;
for(j=1; j<=U; j++)
{
if(Nilai[j] > Nilai[Imaks])
Imaks = j;
}
temp = Nilai[U];
Nilai[U] = Nilai[Imaks];
Nilai[Imaks] = temp;
U--;
cout<<endl;
for(l=0; l<N; l++)
cout<<setw(3)<<Nilai[l];
}
cout<<"\nData Setelah di urut : ";
for(i=0; i<N; i++)
cout<<setw (3 )<<Nilai [ i ] ;
getch ( ) ;
}


void MaximumSortMenurun()
{
cout<<endl;
cout << "Maximum Sort(menurun)";
cout<<endl;
cout<<endl;
 int Nilai [ 20 ];
 int i, j, N, l;
 int temp, U, Imaks;
 cout<<"Masukan Banyaknya Bilangan : ";
 cin>>N;
 for(i=0; i<N; i++)
 {
 cout<<"Elemen ke -"<<i<<" : ";
 cin>>Nilai [ i ];
 }
 //Peroses Cetak Sebelum diut=rutkan
 cout<<"\nData Sebelum diurut :";
 for (i=0; i<N; i++)
 cout<<setw (3)<< Nilai [ i ] ;
 //Peroses pengurutan
 U=N-1;
 for(i=0; i<=N-2; i++)
 {
 Imaks = i;
 for(j=i+1; j<=U; j++)
 {
 if(Nilai[ j ] > Nilai [Imaks])
 Imaks = j;
 }
 temp = Nilai [ i ];
 Nilai [ i ] = Nilai [ Imaks ];
 Nilai [Imaks] = temp;
 cout<<endl;
 for(l=0; l<N; l++)
 cout<<setw(3)<<Nilai [l];
 }
 cout<<"\nData Setelah di urut : " ;
 for(i=0; i<N; i++)
 cout<<setw(3)<<Nilai [i];
 getch ( );
}


void MinimumSortMenaik(){
cout<<endl;
cout << "Minimum Sort(menaik)";
cout<<endl;
cout<<endl;
int Nilai [ 20 ];
 int i, j, N, l;
 int temp, Imin;
 cout<<"Masukan Banyak bilangan : ";
 cin>>N;
 for (i=0; i<N; i++ )
 {
 cout<<"Elemen ke-"<<i<<" : ";
 cin>>Nilai [ i ] ;
 }
 //Proses Cetak Sebelum Diurutkan
 cout<<"\nData sebelum diurut :";
 for(i=0; i<N; i++)
 cout<<setw (3)<<Nilai [ i ];
 //Proses pengurutan
 for (i=0;i<=N-2; i++)
 {
 Imin = i;
 for(j=i+1; j<N; j++)
 {
if(Nilai [j] < Nilai [Imin])
 Imin = j;
 }
 temp = Nilai [i];
 Nilai [i] = Nilai [Imin];
 Nilai [Imin] = temp;
 cout<<endl;
 for(l=0; l<N; l++)
 cout<<setw(3)<<Nilai [l];
 }
 cout<<"\nData Setelah di urut ; ";
 for(i=0; i<N; i++)
 cout<<setw(3)<<Nilai [i];
 getch ( );
}
void MinimumSortMenurun(){
cout<<endl;
cout << "Minimum Sort(menurun)";
cout<<endl;
cout<<endl;
int Nilai [20];
 int i, j, N, l;
 int temp,U, Imin;
 cout<<"Masukan Banyak Bilangan : ";
 cin>>N;
 for (i=0; i<N; i++)
 {
 cout<<"Elemen ke-"<<i<<" : ";
 cin>>Nilai [ i ];
 }
 //Proses Cetak Sebelum diurutkan
 cout<<"\nData sebelum diurut : ";
 for (i=0; i<N; i++)
 cout<<setw ( 3 )<<Nilai [ i ];
//Proses Pengurutan
 U = N - 1;
 for(i=0; i<=N-2; i++)
 {
 Imin = 0;
 for (j=1; j<=U; j++)
 {
 if(Nilai [ j ] <Nilai [Imin])
 Imin = j;
 }
 temp = Nilai [ U ];
 Nilai [ U ]= Nilai [ Imin ];
 Nilai [ Imin ] = temp;
 cout<<endl;
 U--;
 for(l=0; l<N; l++)
 cout<<setw ( 3 )<<Nilai [ l ];
 }
 cout<<"\nData Setelah di urut : ";
 for(i=0; i<N; i++)
 cout<<setw ( 3 )<<Nilai [ i ];
 getch ( );
}

main()
{
    int n;
    do{
    system("cls");
    cout << "Menu Pilihan Metode Pengurutan Data"<<endl;
    cout << "1. Maximum Sort(menaik)"<<endl;
    cout << "2. Maximum Sort(menurun)"<<endl;
    cout << "3. Minimum Sort(menaik)"<<endl;
    cout << "4. Minimum Sort(menurun)"<<endl;
    cout << "Masukan Nomer Menu Yang Di Inginkan"<<endl;
    cin >> n;
    if(n==1){
        MaximumSortMenaik();
    }else if(n==2){
        MaximumSortMenurun();
    }else if(n==3){
        MinimumSortMenaik();
    }else if(n==4){
        MinimumSortMenurun();
    }else{
        system("cls");
    cout << "Mohon masukkan Nomor Menu Yang Benar ";
    }
    getch();
    }
    while (n!=5);
}

