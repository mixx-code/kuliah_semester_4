#include <iostream>
#include <conio.h>
using namespace std;
struct nilai
{
    char NIM[15];
    char nama[25];
    int nilai_tugas;
    int nilai_UTS;
    int nilai_UAS;
    int nilai_akhir;
    char nilai_huruf;
};

int main()
{
int i;
    int jumlah_indexs;
    cout << "silahkan masukkan data pada form dibawah"<<endl;

    cout<<endl;
    cout << "Jumlah Mahasiswa yang akan dimasukkan \t: ";
    cin >> jumlah_indexs;
    cout<<endl;
    cout<<endl;

    nilai nl[jumlah_indexs];

    for(i=0;i<jumlah_indexs;i++){
    cout << "Mahasiswa ke -"<<i+1<<endl;
    cout << "masukkan NIM\t: ";
    gets(nl[i].NIM);
    cin.getline(nl[i].NIM,15);
    cout << "masukkan nama\t: ";
    cin.getline(nl[i].nama,25);
    cout << "masukkan nilai tugas\t:";
    cin >> nl[i].nilai_tugas;
    cout << "masukkan nilai UTS\t:";
    cin >> nl[i].nilai_UTS;
    cout << "masukkan nilai UAS\t:";
    cin >> nl[i].nilai_UAS;

    nl[i].nilai_akhir=(nl[i].nilai_tugas*0,2)+(nl[i].nilai_UTS*0.35)+(nl[i].nilai_UAS*0,45);

    if(nl[i].nilai_akhir > 85 && nl[i].nilai_akhir <=100){
        nl[i].nilai_huruf= 'A';
    }else if(nl[i].nilai_akhir > 70 && nl[i].nilai_akhir <=85){
        nl[i].nilai_huruf= 'B';
    }else if(nl[i].nilai_akhir > 55 && nl[i].nilai_akhir <=70){
        nl[i].nilai_huruf= 'C';
    }else if(nl[i].nilai_akhir > 40 && nl[i].nilai_akhir <=55){
        nl[i].nilai_huruf= 'D';
    }else if(nl[i].nilai_akhir > 0 && nl[i].nilai_akhir <=40){
        nl[i].nilai_huruf= 'E';
    }
    }

    cout<<endl;
    cout << "Daftar Nilai Mahasiswa";
    cout<<endl;
    cout << "NO\tNIM\t\tNAMA\t\tNILAI TUGAS\tNILAI UTS\tNILAI UAS\tNILAI AKHIR\tGRADE"<<endl;
    for(i=0;i<jumlah_indexs;i++){
        cout << endl;
        cout << i+1<<"\t"<<nl[i].NIM<<"\t"<<nl[i].nama<<"\t"<<nl[i].nilai_tugas<<"\t\t"<<nl[i].nilai_UTS<<"\t\t"<<nl[i].nilai_UAS<<"\t\t"<<nl[i].nilai_akhir<<"\t\t"<<nl[i].nilai_huruf<<endl;
    }
    cout<<endl;
    cout << nl;
};

