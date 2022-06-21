#include<iostream>
#include<conio.h>
using namespace std;
main()
{
  int Nilai[20]={61,62,87,27,18,97,40,32,65,77,16,96,34,24,15,14,17,81,13,82};
  int Posisi[20];
  int i, max=20, Bilangan, Banyak=0;
  bool ketemu;
cout << endl;
    cout << "NAMA : Rizki febriansyah || NIM : 201011401819 ";
    cout << endl;
    cout << endl;
  cout<<endl;

 Nilai[i];
  //Mencetak Elemen Array
  cout<<"\n\Deretan Bilangan = ";
  for(i=0; i<max; i++)
  cout<<Nilai[i]<<" ";

  cout<<"\n\nMasukkan Bilangan yang akan Dicari = ";
  cin>>Bilangan;

  //Melakukan Pencarian
  for(i=0; i<max; i++)
  {
    if(Nilai[i]==Bilangan)
    {
      ketemu = true;
      Posisi[Banyak]=i;
      Banyak++;
    }
  }
  if(ketemu)
  {
    cout<<"Bilangan "<<Bilangan<<" ditemukan sebanyak "<<Banyak;
    cout<<"\npada posisi ke = ";
    for(i=0; i<Banyak; i++)
    cout<<Posisi[i]<<" ";
  }
    else
    cout<<"Bilangan "<<Bilangan<<" tidak ditemukan";
    getch();
}
