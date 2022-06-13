#include<stdio.h>
#include<string.h>
#include<iostream>
#include<conio.h>

using namespace std;
#define MaxS 50
//pertemuan XI
/////////////////////////////////////////////////////////////

struct Stack
 {
 char Isi [MaxS] ;
 unsigned int Top;
 };
void INITS (Stack &S) ;
void PUSH (Stack &S, char Data) ;
void CETAK (Stack S) ;
void POP (Stack &S, char &Hsl) ;
void stackArray()
{
 char huruf ;
 Stack S;
 INITS (S) ;
 cout<<"Masukan Karakter :";
 cin>>huruf ;
 PUSH(S, huruf);
 cout<<"Masukan Karakter :";
 cin>>huruf ;
 PUSH(S, huruf);
 cout<<"Masukan Karakter :";
cin>>huruf ;
 PUSH(S, huruf);
CETAK (S);
 POP (S, huruf);
 cout<<endl<<"Yang Dihapus ........."<<huruf;
 CETAK (S) ;
 cout<<endl<<"Masukan Karakter :";
 cin>>huruf ;
 PUSH(S, huruf);
 cout<<"Masukan karakter :";
 cin>>huruf;
 PUSH(S, huruf);
 cout<<"Masukan karakter :";
 cin>>huruf;
 PUSH(S, huruf);
 CETAK (S) ;
 POP (S, huruf);
 cout<<endl<<"Yang Dihapus .........."<<huruf;
 CETAK (S) ;
 getch ( ) ;
}
void INITS (Stack &S)
{
S.Top = 0;
}
void PUSH (Stack &S, char Data)
{
 if (S.Top <MaxS)
 {
 S.Top++;
 S.Isi [S.Top] = Data;
 }
 else
 cout<<"Stack penuh..........";
}
void CETAK (Stack S)
{
 int i;
 cout<<endl<<"Isi Stack : ";
 if (S.Top != 0)
 {
 for(i=1;i<S.Top;i++){
 cout<<S.Isi [i];
 }
 }
 else
 cout<<"Stack Kosong …..";
}
void POP (Stack &S, char &Hsl)
{
 if (S.Top !=0)
 {
 Hsl = S.Isi [S.Top];
 S.Top--;
 }
 else
 cout<<"Stack Kosong…..";
}
//=================end of file==================

/////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////

#include<conio.h>
#include<stdlib.h>
#define true 1
#define false 0
typedef struct node *simpul;
struct node
 {
 char Isi;
 simpul next ;
 };
//======================
//==Prototype Function==
//======================
void Sisip_Belakang (simpul &L, char elemen);
void Hapus_Belakang (simpul &L);
void Cetak (simpul L);
//=================
//==Function Main==
//=================
void SinglyLinkedList()
{
 char huruf ;
 simpul L = NULL; //Pastikan bahwa L kosong
 cout<<"Operasi Single Linked List Pada Stack==\n\n";
 //==================
 //==Sisip Belakang==
 //==================
 cout<<endl<<endl<<"Penyiapan Stack "<<endl<<endl;
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 cout<<"Masukan Elemen : "; cin>> huruf;
 Sisip_Belakang (L, huruf);
 Cetak (L);
 //=========================
 //==Hapus Simpul Belakang==
 //=========================
 cout<<endl<<endl<<"Hapus Elemen "<<endl;
 Hapus_Belakang (L);
 Cetak (L);
 cout<<endl<<endl<<"Hapus Elemen "<<endl;
 Hapus_Belakang (L);
 Cetak (L);
 cout<<endl<<endl<<"Hapus Elemen "<<endl;
 Hapus_Belakang (L);
Cetak (L);
 cout<<endl<<endl<<"Hapus Elemen "<<endl;
 Hapus_Belakang (L);
 Cetak (L);
 getch () ;
}
//******************************************
//**FUNCTION SISIP SIMPUL DI BELAKANG*******
//******************************************
void Sisip_Belakang (simpul & L, char elemen)
{
 simpul bantu, baru;
 baru= (simpul) malloc(sizeof(simpul));
 baru->Isi = elemen;
 baru->next = NULL;
 if(L == NULL)
 L=baru;
 else
 {
 bantu=L;
 while(bantu->next != NULL)
 bantu=bantu->next;
 bantu->next=baru;
}
}
//*****************************************
//**FUNCTION HAPUS SIMPUL BELAKANG*********
//*****************************************
void Hapus_Belakang (simpul & L)
{
 simpul bantu, hapus;
 if(L == NULL)
 cout<<"Linked List Kosong...........";
 else
 {
bantu=L;
 while(bantu->next->next != NULL)
 bantu=bantu->next;
hapus = bantu ->next;
bantu->next = NULL;
free(hapus);
 }
}
//******************************************
//**FUNCTION MENCETAK ISI LINKED LIST**
//******************************************
void Cetak(simpul L)
{
 simpul bantu;
 if (L==NULL)
 cout<<"Linked List Kosong ……….."<<endl;
 else
 {
 bantu=L;
 cout<<endl<<"Isi Linked List : ";
 while (bantu->next != NULL)
 {
 cout<<bantu->Isi <<"->";
 bantu=bantu->next;
 }
 cout<<bantu->Isi;
 }
} //==================== eof================

/////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////
main()
{
    int n;
    do{
    system("cls");
    cout << "Menu Pilihan Metode Pengurutan Data"<<endl;
    cout << "1. Stack dengan menggunakan Array"<<endl;
    cout << "2. Singly Linked List"<<endl;
    cout << "Masukan Nomer Menu Yang Di Inginkan"<<endl;
    cin >> n;
    if(n==1){
        stackArray();
    }else if(n==2){
        SinglyLinkedList();
    }else{
        system("cls");
    cout << "Mohon masukkan Nomor Menu Yang Benar ";
    }
    getch();
    }
    while (n!=5);
}


