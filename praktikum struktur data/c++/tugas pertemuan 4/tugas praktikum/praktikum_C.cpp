#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
main()
{
    int Nilai[] = {45, 23, 50, 8, 12, 10, 15};
    int *Ptr_Nilai ;
    int i;
    Ptr_Nilai = Nilai ;
    cout<<"\nNiIai Ptr_Nilai "<<Ptr_Nilai;
    cout<<"\nAIamat array Niiai "<<Ptr_Nilai;
    cout<<"\nNiIai yang ada pada alamat "<<Ptr_Nilai<<" adalah "<<*Ptr_Nilai;
    cout<<"\nEIemen Array indeks pertama	: "<<Nilai [0];
    cout<<"\n\nEIemen Array (dgn Array ) : ";
    for ( i=0;i<7;i++)
    cout<<Nilai [i]<<" "; //mencetak elemen array
    cout<<"\n\nEIemen Array (dgn Pointer)	: ";
    for(i=0;i<7;i++)
    cout<<*( Nilai+i )<<" "; //mencetak elemen array
    getch();
}
