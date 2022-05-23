#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;


void ShellSortMenaik()
{
int Nilai [ 20 ];
int i, k, N, l;
int temp, jarak, s;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
for (i=0; i<N; i++)
{
cout<<"Elemen ke-"<<i<<" : ";
cin>>Nilai [ i ] ;
}
//Proses Cetak Sebelum diurutkan
cout<<"\nData sebelum diurut : ";
for (i=0; i<N; i++)
cout<<setw (4)<<Nilai [ i ];
//Proses pengurutan
jarak = N/2;
cout<<"\nJarak= "<<jarak;
while (jarak >= 1)
{
do
{
s=0;
for (i =0; i<=(N-jarak)-1; i++)
{
k=i+ jarak;
if(Nilai [i] > Nilai [k])
{
temp = Nilai [i];
Nilai [i] = Nilai [k];
Nilai [k] = temp;
s=1;
for(l=0; l<N; l++)
cout<<setw (4)<<Nilai [l];
cout<<"\n\t";
getch();
}
}
}
while(s!=0);
jarak /=2;
cout<<"\nJarak= "<<jarak;
}
cout<<"\nData Setelah diurut : ";
for(i=0; i<N ;i++)
cout<<setw (4)<<Nilai [i];
getch ();
}

void ShellSortMenurun()
{
int Nilai [ 20 ];
int i, k, N, l;
int temp, jarak, s;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
for (i=0; i<N; i++)
{
cout<<"Elemen ke-"<<i<<" : ";
cin>>Nilai [ i ] ;
}
//Proses Cetak Sebelum diurutkan
cout<<"\nData sebelum diurut : ";
for (i=0; i<N; i++)
cout<<setw (4)<<Nilai [ i ];
//Proses pengurutan
jarak = N/2;
cout<<"\nJarak= "<<jarak;
while (jarak >= 1)
{
do
{
s=0;
for (i =0; i<=(N-jarak)-1; i++)
{
k=i+ jarak;
if(Nilai [i] < Nilai [k])
{
temp = Nilai [i];
Nilai [i] = Nilai [k];
Nilai [k] = temp;
s=1;
for(l=0; l<N; l++)
cout<<setw (4)<<Nilai [l];
cout<<"\n\t";
getch();
}
}
}
while(s!=0);
jarak /=2;
cout<<"\nJarak= "<<jarak;
}
cout<<"\nData Setelah diurut : ";
for(i=0; i<N ;i++)
cout<<setw (4)<<Nilai [i];
getch ();
}

void InsertionSortmenaik()
{
int Nilai [ 20 ];
int i, j, k, N;
int temp;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
for (i=0; i<N; i++)
{
cout<<"Elemen ke-"<<i<<" : ";
cin>>Nilai [ i ] ;
}
//Proses Cetak Sebelum diurutkan
cout<<"\nData sebelum diurut : ";
for (i=0; i<N; i++)
cout<<setw ( 3 )<<Nilai [ i ];
//Proses pengurutan
for(i=1; i<N; i++)
{
temp = Nilai [ i ] ;
j=i-1 ;
while ((temp <= Nilai [ j ]) && (j>=1))
{
Nilai [j+1] = Nilai [ j ];
j--;
}
if(temp >= Nilai [ j ])
Nilai [j+1] = temp;
else
{
Nilai [ j + 1] = Nilai [ j ];
Nilai [ j ] = temp;
}
cout<<endl;
for(k=0; k<N; k++)
cout<<setw ( 3 )<<Nilai [ k ];
}
//Proses Cetak Setelah diurutkan
cout<<"\nData Setelah diurut : ";
for (i=0; i<N; i++)
cout<<setw (3)<<Nilai [ i ] ;
getch ( ) ;
}

void InsertionSortMenurun()
{
int Nilai [ 20 ];
int i, j, k, N;
int temp;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
for (i=0; i<N; i++)
{
cout<<"Elemen ke-"<<i<<" : ";
cin>>Nilai [ i ] ;
}
//Proses Cetak Sebelum diurutkan
cout<<"\nData sebelum diurut : ";
for (i=0; i<N; i++)
cout<<setw ( 3 )<<Nilai [ i ];
//Proses pengurutan
for(i=1; i<N; i++)
{
temp = Nilai [ i ] ;
j=i-1 ;
while ((temp > Nilai [ j ]) && (j>=1))
{
Nilai [j+1] = Nilai [ j ];
j--;
}
if(temp <= Nilai [ j ])
Nilai [j+1] = temp;
else
{
Nilai [ j + 1] = Nilai [ j ];
Nilai [ j ] = temp;
}
cout<<endl;
for(k=0; k<N; k++)
cout<<setw ( 3 )<<Nilai [ k ];
}
//Proses Cetak Setelah diurutkan
cout<<"\nData Setelah diurut : ";
for (i=0; i<N; i++)
cout<<setw (3)<<Nilai [ i ] ;
getch ( ) ;
}


main()
{
    int pil, databaru;
    do
    {
        system("cls");
        cout<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" |                             |"<<endl;
        cout<<" |             menu            |"<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" |  1. Shell Sort(menaik)      |"<<endl;
        cout<<" |  2. Shell Sort(menurun)     |"<<endl;
        cout<<" |  3. Insertion Sort(menaik)  |"<<endl;
        cout<<" |  4. Insertion Sort(menurun) |"<<endl;
        cout<<" |                             |"<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1:
                {
                ShellSortMenaik();
                break;
            }
            case 2:
                {
                ShellSortMenurun();
                break;
            }
            case 3:
                {
                InsertionSortmenaik();
                break;
            }
            case 4:
                {
                InsertionSortMenurun();
            }
            default : system("cls");
            {
                cout<<"\n MASUKAN ANGKA YANG TERSEDIA!!!";
            }
        }
        getch();
    }
    while (pil!=4);
}
