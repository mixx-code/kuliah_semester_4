#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int Nilai [20];
int i, N, Terbesar;
cout<<"Masukan Banyaknya Bilangan = ";
cin>>N;
cout<<endl;

for(i=0; i<N; i++)
{
 cout<<"Masukan elemen ke-"<<i<<"=";
 cin>>Nilai [i];
}
Terbesar = Nilai [1];
for (i=1; i<N; i++)
{
if (Nilai [i]>Terbesar)
Terbesar = Nilai [i];
}

cout<<"\nBilangan Terbesar = "<< Terbesar;
getch();
}
