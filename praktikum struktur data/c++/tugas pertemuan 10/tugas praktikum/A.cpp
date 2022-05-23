#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
typedef struct node *simpul;
struct node
 {
 char Isi;
 simpul Next;
  simpul kanan;
 simpul kiri;
 };
//=====================
//==Prototype Function=
//=====================
void Sisip_Depan (simpul &L, char elemen );
void Sisip_Belakang (simpul &L, char elemen ) ;
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2 ) ;
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2 ) ;
void Hapus_Depan (simpul &L);
void Hapus_Belakang (simpul &L);
void Hapus_Tengah (simpul &L, char elemen);
void Cetak (simpul L);
//===================
//==Function Main====
//===================
void SinglyLinked( )
{
char huruf, huruf2;
 simpul L = NULL; //Pastikan Bahwa L kosong
 cout<<"==OPERASI PADA SINGLE LINKED LIST=="<<endl<<endl;
 //===============
 //==Sisip Depan==
 //===============
 cout<<"Penyisipan Simpul Di Depan"<<endl<<endl;
 cout<<"Masukan Huruf : "; cin>>huruf;
 Sisip_Depan (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Depan (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Depan (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Depan (L, huruf );
 Cetak (L);
 //=================
 //==Sisip Belakang=
 //=================
 cout<<"\n\nPenyisipan Simpul Di Belakang"<<endl<<endl;
 cout<<"Masukan Huruf : "; cin>>huruf;
 Sisip_Belakang (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Belakang (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Belakang (L, huruf );
 cout<<"Masukan Huruf :"; cin>>huruf ;
 Sisip_Belakang (L, huruf );
 Cetak (L);
 //=======================================
 //==Sisip Simpul Setelah Simpul Tertentu=
 //=======================================
 cout<<endl<<endl<<"Masukan Huruf : "; cin>>huruf;
 cout<<"Disisip Setelah Huruf : "; cin>>huruf2;
 cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
 Sisip_Tengah1 (L, huruf, huruf2);
 Cetak (L) ;
//=======================================
 //==Sisip Simpul Sebelum Simpul Tertentu=
 //=======================================
cout<<endl<<endl<<"Masukan Huruf : "; cin>>huruf;
 cout<<"Disisip Sebelum Huruf : "; cin>>huruf2;
 cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
 Sisip_Tengah2 (L, huruf, huruf2);
 Cetak (L) ;
 //=====================
 //==Hapus Simpul Depan=
 //=====================
 cout<<endl<<endl<<"Setelah Hapus Simpul Depan "<<endl;
 Hapus_Depan (L);
 Cetak (L);
 //========================
 //==Hapus Simpul Belakang=
 //========================
 cout<<endl<<endl<<"Setelah Hapus Simpul Belakang "<<endl;
 Hapus_Belakang (L);
 Cetak (L);
 //=======================
 //==Hapus Simpul TENGAH==
 //=======================
 cout<<"\n\nMasukkan Huruf Tengah Yang akan dihapus :";
 cin>>huruf;
 Hapus_Tengah (L,huruf);
 Cetak (L);
 getch ( ) ;
}
//************************************
//**FUNCTION SISIP SIMPUL DI DEPAN****
//************************************
void Sisip_Depan (simpul &L, char elemen)
{
 simpul baru; // = new simpul ;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen ;
 baru-> Next = NULL;
 if (L== NULL)
 L=baru;
else
{
 baru->Next = L;
L= baru;
 }
}
//************************************************
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU**
//************************************************
void Sisip_Tengah1 (simpul &L, char elemen1, char elemen2)
{
 simpul bantu,baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen1 ;
 baru-> Next = NULL;
 if (L== NULL)
 cout << "List Kosong ............."<<endl;
 else
 {
 bantu = L;
 while (bantu ->Isi != elemen2) bantu = bantu -> Next;
 baru->Next = bantu ->Next ;
 bantu->Next = baru ;
 }
}
//******************************************************
//**FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU********
//******************************************************
void Sisip_Tengah2 (simpul &L, char elemen1, char elemen2)
{
 simpul bantu, baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen1 ;
 baru-> Next = NULL;
 if (L== NULL)
 cout<<"List Kosong.............."<<endl;
 else
 {
 bantu = L;
 while (bantu->Next->Isi != elemen2) bantu = bantu -> Next;
 baru->Next = bantu ->Next ;
 bantu->Next = baru ;
 }
}
//**********************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG************
//**********************************************
void Sisip_Belakang (simpul &L, char elemen)
{
 simpul bantu, baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen ;
 baru-> Next = NULL;
 if (L== NULL)
 L=baru;
 else
 {
 bantu = L;
 while (bantu->Next != NULL)
 bantu= bantu -> Next ;
 bantu->Next = baru ;
 }
}
//**********************************************
//**FUNCTION MENCETAK ISI LINKED LIST*************
//**********************************************
void Cetak (simpul L)
{
 simpul bantu ;
 if (L==NULL)
 cout<<"Linked List Kosong ........"<<endl;
 else
 {
 bantu =L;
 cout<<"Isi Linked List : ";
 while (bantu ->Next != NULL)
 {
 cout<<bantu->Isi<<"-->";
 bantu=bantu->Next;
 }
 cout<<bantu->Isi;
}
}
//*************************************
//**FUNCTION HAPUS SIMPUL DEPAN********
//*************************************
void Hapus_Depan (simpul &L)
{
 simpul Hapus ;
 if (L==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 Hapus = L;
 L = L-> Next ;
 Hapus -> Next = NULL;
 free (Hapus);
 }
}
//*************************************
//**FUNCTION HAPUS SIMPUL BELAKANG*****
//*************************************
void Hapus_Belakang (simpul &L)
{
 simpul bantu, hapus;
 if (L==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 bantu = L;
 while (bantu ->Next->Next != NULL) bantu=bantu->Next;
 hapus = bantu -> Next;
 bantu -> Next = NULL;
 free (hapus);
 }
}
//*************************************
//**FUNCTION HAPUS SIMPUL DI TENGAH****
//*************************************
void Hapus_Tengah(simpul &L, char elemen)
{
simpul bantu,hapus;

if (L==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 bantu = L;
 while (bantu ->Next->Isi != elemen) bantu=bantu->Next;
 hapus = bantu -> Next;
 bantu ->Next = bantu -> Next ->Next;
hapus -> Next = NULL;
 free (hapus);
 }
}
//======================eof==========================

//=====================Operasi Doubly Linked===================================

#define true 1
#define false 0

//=====================
//==Prototype Function=
//=====================
void Sisip_Depan2 (simpul &DL, char elemen );
void Sisip_Belakang2 (simpul &DL, char elemen ) ;
void Sisip_Tengah12 (simpul &DL, char elemen1, char elemen2 ) ;
void Sisip_Tengah22 (simpul &DL, char elemen1, char elemen2 ) ;
void Hapus_Depan2 (simpul &DL);
void Hapus_Belakang2 (simpul &DL);
void Hapus_Tengah2 (simpul &DL, char elemen);
void Cetak2 (simpul DL);
//===================
//==Function Main====
//===================
void DoublyLinked( )
{
 char huruf, huruf2;
 simpul DL = NULL; //Pastikan Bahwa DL kosong
 int i;
 cout<<"\t\t==OPERASI PADA DOUBLY LINKED LIST==\n\n";
 //===============
 //==Sisip Depan==
 //===============
 cout<<"Penyisipan Simpul Di Depan"<<endl<<endl;
 for (i=1;i<=4;i++)
 {
 cout<<"Masukan Huruf : "; cin>>huruf;
 Sisip_Depan2 (DL, huruf );
 }
 Cetak2 (DL);
 //=================
 //==Sisip Belakang=
 //=================
 cout<<"\n\nPenyisipan Simpul Di Belakang"<<endl<<endl;
 for (i=1;i<=4;i++)
 {
 cout<<"Masukan Huruf : "; cin>>huruf;
 Sisip_Belakang2 (DL, huruf );
 }
 Cetak2 (DL);
 //=======================================
 //==Sisip Simpul Setelah Simpul Tertentu=
 //=======================================
 cout<<endl<<endl<<"Masukan Huruf : "; cin>>huruf;
 cout<<"Disisip Setelah Huruf : "; cin>>huruf2;
 cout<<huruf<<" Disisip Setelah "<<huruf2<<endl;
 Sisip_Tengah12 (DL, huruf, huruf2);
 Cetak2 (DL) ;
 //=======================================
 //==Sisip Simpul Sebelum Simpul Tertentu=
 //=======================================
 cout<<endl<<endl<<"Masukan Huruf : "; cin>>huruf;
 cout<<"Disisip Sebelum Huruf : "; cin>>huruf2;
 cout<<huruf<<" Disisip Sebelum "<<huruf2<<endl;
 Sisip_Tengah22 (DL, huruf, huruf2);
Cetak2 (DL) ;
 //=====================
 //==Hapus Simpul Depan=
 //=====================
 cout<<endl<<endl<<"Setelah Hapus Simpul Depan "<<endl;
 Hapus_Depan2 (DL);
 Cetak2 (DL);
 //========================
 //==Hapus Simpul Belakang=
 //========================
 cout<<endl<<endl<<"Setelah Hapus Simpul Belakang "<<endl;
 Hapus_Belakang2 (DL);
 Cetak2 (DL);
 //=======================
 //==Hapus Simpul TENGAH==
 //=======================
 cout<<"\n\nMasukkan Huruf Tengah Yang akan dihapus :";
 cin>>huruf;
 Hapus_Tengah2 (DL,huruf);
 Cetak2 (DL);
 getch ( ) ;
}
//************************************
//**FUNCTION SISIP SIMPUL DI DEPAN****
//************************************
void Sisip_Depan2 (simpul &DL, char elemen)
{
 simpul baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen ;
 baru-> kanan = NULL;
 baru-> kiri = NULL;
 if (DL== NULL)
 DL=baru;
 else
 {
 baru->kanan = DL;
 DL->kiri = baru;
 DL= baru;
 }
}
//**************************************************
//**FUNCTION SISIP SIMPUL SETELAH SIMPUL TERTENTU **
//**************************************************
void Sisip_Tengah12 (simpul &DL, char elemen1, char elemen2)
{
 simpul bantu,baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen1 ;
 baru-> kanan = NULL;
 baru-> kiri = NULL;
 if (DL== NULL)
 cout << "List Kosong ............."<<endl;
 else
 {
 bantu = DL;
 while (bantu ->Isi != elemen2)
 bantu = bantu -> kanan;
 baru->kanan = bantu ->kanan;
 baru->kiri = bantu;
 bantu->kanan->kiri = baru;
 bantu->kanan = baru;
 }
}
//******************************************************
//**FUNCTION SISIP SIMPUL SEBELUM SIMPUL TERTENTU*******
//******************************************************
void Sisip_Tengah22 (simpul &DL, char elemen1, char elemen2)
{
 simpul bantu, baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen1 ;
 baru-> kanan = NULL;
 baru-> kiri = NULL;
 if (DL== NULL)
 cout<<"List Kosong.............."<<endl;
 else
 {
 bantu = DL;
 while (bantu->kanan->Isi != elemen2)
 bantu = bantu -> kanan;
 baru->kanan = bantu ->kanan;
 baru->kiri = bantu;
 bantu->kanan->kiri = baru;
 bantu->kanan = baru;
 }
}
//**********************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG***********
//**********************************************
void Sisip_Belakang2 (simpul &DL, char elemen)
{
 simpul bantu, baru;
 baru = (simpul) malloc (sizeof(simpul));
 baru->Isi = elemen ;
 baru-> kanan = NULL;
 baru-> kiri = NULL;
 if (DL== NULL)
 DL=baru;
 else
 {
 bantu = DL;
 while (bantu->kanan != NULL)
 bantu = bantu -> kanan;
 bantu->kanan = baru;
 baru->kiri = bantu;
 }
}
//**********************************************
//**FUNCTION MENCETAK ISI LINKED LIST***********
//**********************************************
void Cetak2 (simpul DL)
{
 simpul bantu ;
 if (DL==NULL)
 cout<<"Linked List Kosong ........"<<endl;
 else
 {
 bantu =DL;
 cout<<"Isi Linked List : ";
 while (bantu ->kanan != NULL)
 {
 cout<<bantu->Isi<<"<= =>";
 bantu=bantu->kanan;
 }
 cout<<bantu->Isi;
}
}
//*************************************
//**FUNCTION HAPUS SIMPUL DEPAN********
//*************************************
void Hapus_Depan2 (simpul &DL)
{
 simpul Hapus ;
 if (DL==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 Hapus = DL;
 DL = DL-> kanan ;
 DL ->kiri = NULL;
 Hapus -> kanan = NULL;
 free (Hapus);
 }
}
//*************************************
//**FUNCTION HAPUS SIMPUL BELAKANG*****
//*************************************
void Hapus_Belakang2 (simpul &DL)
{
 simpul bantu, hapus;
 if (DL==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 bantu = DL;
 while (bantu ->kanan->kanan != NULL) bantu=bantu->kanan;
 hapus = bantu -> kanan;
 bantu -> kanan = NULL;
 hapus -> kiri = NULL;
 free (hapus);
 }
}
//*************************************
//**FUNCTION HAPUS SIMPUL DI TENGAH****
//*************************************
void Hapus_Tengah2(simpul &DL, char elemen)
{
simpul bantu,hapus;
 if (DL==NULL)
 cout<<"Linked List Kosong.............";
 else
 {
 bantu = DL;
 while (bantu ->kanan->Isi != elemen)
 bantu=bantu->kanan;
 hapus = bantu -> kanan;
 bantu ->kanan->kanan->kiri = bantu;
 bantu ->kanan = bantu->kanan->kanan;
 hapus -> kanan = NULL;
 hapus -> kiri = NULL;
 free (hapus);
 }
}
//======================eof===========================




//menu
main()
{
    int pil, databaru;
    do
    {
        system("cls");
        cout<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" |                             |"<<endl;
        cout<<" |          modul 10           |"<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" |  1. Singly Linked           |"<<endl;
        cout<<" |  2. Doubly Linked           |"<<endl;
        cout<<"  _____________________________"<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1:
                {
                SinglyLinked();
                break;
            }

            case 2:
                {
                DoublyLinked();
                break;
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
