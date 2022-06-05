#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;


void BubbleSortMenaik(){
    int Nilai [ 20 ];
    int i, j, k ,N ;
    int temp ;
    bool tukar ;
    cout<<"Masukan Banyak Bilangan : ";
    cin>>N;
    for (i=0; i<N; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai [ i ];
    }
    //Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelumnya diurut :";
    for (i=0; i<N ; i++)
    cout<<setw ( 3 )<<Nilai [ i ];
    //Proses Pengurutan
    i=0;
    tukar = true;
        while ((i<=N-2) && (tukar)){
            tukar=false;
                for (j=N-1; j>=i+1; j--){
                    if( Nilai [ j ] < Nilai [ j-1 ] ){
                        temp = Nilai [ j ];
                        Nilai [ j ] = Nilai [ j-1];
                        Nilai [ j-1 ] = temp;
                        tukar = true;
                        cout<<"\nUntuk j = "<<j<<" : ";
                        for (k=0; k<N; k++){
                            cout<<setw(3)<<Nilai [ k ] ;
                        }
                    }
                }
            i++ ;
        }
    //Proses Cetak setelah diurutkan
    cout<<"\nData setelah di urut : ";
    for (i=0; i<N; i++ ){
    cout<<setw ( 3 )<<Nilai [ i ] ;
    }
    getch () ;
}

void BubbleSortMenurun(){
    int Nilai[20];
    int i, j, k, N;
    int temp;
    bool tukar;
    cout<<"Masukkan Banyak Bilangan : ";
    cin>>N;
    for(i=0; i<N; i++){
        cout<<"Elemen ke-"<<i<<" : ";
        cin>>Nilai[i];
    }
    //Proses Cetak Sebelum diurutkan
    cout<<"\nData sebelum diurut : ";
    for(i=0; i<N; i++)
        cout<<setw(3)<<Nilai[i];
    //Proses Pengurutan
    i=0;
    tukar = true;
    while ((i<=N-2) && (tukar)){
        tukar=false;
        for(j=N-1; j>=i+1; j--){
            if(Nilai[j] > Nilai[j-1]){
                temp = Nilai[j];
                Nilai[j] = Nilai[j-1];
                Nilai[j-1] = temp;
                tukar = true;
                cout<<endl;
                for(k=0; k<N; k++)
                    cout<<setw(3)<<Nilai[k];
            }
        }
        i++;
    }
      //Proses Cetak Setelah diurutkan
      cout<<"\nData Setelah di urut : ";
      for(i=0; i<N; i++)
        cout<<setw(3)<<Nilai[i];
      getch();
}
int Cetak(int data [],int n){
int i ;
for ( i=0 ; i<n ; i++)
    cout<<setw ( 3 )<<data [ i ] ;
    cout<<"\n" ;
}

int Partisi(int data [], int p, int r){
int x, i, j, temp;
x = data [ p ];
i=p;
j=r;
    while (1){
        while( data[j]>x)
        j--;
        while( data[i]<x)
        i++;
        if(i<j){
            temp = data [ i ];
            data [ i ] = data [ j ];
            data [ j ] = temp;
        }else{
            return j;
        }
    }
}
int Quick_Sort(int data [], int p, int r){
int q ;
    if (p<r){
        q=Partisi (data, p,r+1) ;
        Quick_Sort (data, p, q ) ;
        Quick_Sort (data, q+1, r) ;
    }
}
void QuickSort(){
int Nilai [ 20 ];
int i, N ;
cout<<"Masukan Banyak Bilangan : ";
cin>>N;
for(i=0; i<N; i++ ){
     cout<<"Elemen ke-"<<i<<" : ";
     cin>>Nilai [ i ] ;
 }
cout<<"\nData Sebelum di urut : ";
Cetak ( Nilai, N ) ;
cout<<endl;
Quick_Sort (Nilai, 0, N-1 );
cout<<"\nData Setelah di urut : ";
Cetak ( Nilai, N ) ;
getch ( ) ;
}

main()
{
    int pil, databaru;
    do
    {
        system("cls");
        cout<<endl;
        cout<<"  ____________________________"<<endl;
        cout<<" |                            |"<<endl;
        cout<<" |      PERTEMUAN KE 7        |"<<endl;
        cout<<"  ____________________________"<<endl;
        cout<<" |  1. Bubble Sort(menaik)    |"<<endl;
        cout<<" |  2. Bubble Sort(menurun)   |"<<endl;
        cout<<" |  3. Quick Sort             |"<<endl;
        cout<<" |                            |"<<endl;
        cout<<"  ____________________________"<<endl;
        cout<<" Masukan Pilihan : ";cin>>pil;
        switch (pil)
        {
            case 1: system("cls");{
                BubbleSortMenaik();
                break;
            }
            case 2: system("cls");{
                BubbleSortMenurun();
                break;
            }
            case 3: system("cls");{
                QuickSort();
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
