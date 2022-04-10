#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct tinggal{
    char jalan[20];
    char kode_pos[20];
    char kota[20];
};
struct tanggal{
    char tgl[20];
    char bulan[20];
    char tahun[20];
};
struct BiodataPegawai{
    char NIP[20];
    char nama[20];
    char jabatan[20];
    tinggal alamat;
    tanggal lahir;
    tanggal mulai_kerja;
}BP[0];

int main(){
int i;

    int jumlah_indexs;
    cout<<endl;
    cout << "BERAPA DATA YANG AKAN DI MASUKKAN \t: ";
    cin >> jumlah_indexs;
    cout<<endl;
    cout<<endl;

    BiodataPegawai BP[jumlah_indexs];

    for(i=0;i<jumlah_indexs;i++){
    cout << "MASUKKAN DATA PEGAWAI KE -"<<i+1<<endl;
    cout<<endl;
    cout << "Masukkan NIP \t\t\t: ";
    gets(BP[i].NIP);
    cin.getline(BP[i].NIP,20);
    cout << "Masukkan Nama \t\t\t: ";
    cin.getline(BP[i].nama,20);
    cout << "Masukkan Jabatan \t\t: ";
    cin.getline(BP[i].jabatan,20) ;
    cout <<endl;
    //alamat
    cout << "MASUKKAN ALAMAT PEGAWAI"<<endl;
    cout <<endl;
    cout << "Masukkan Jalan \t\t\t: ";
    cin.getline(BP[i].alamat.jalan,20);
    cout << "Masukkan Kode POS \t\t: ";
    cin.getline(BP[i].alamat.kode_pos,20);
    cout << "Masukkan Kota \t\t\t: ";
    cin.getline(BP[i].alamat.kota,20);
    cout <<endl;
    //tanggal lahir
    cout << "MASUKKAN TANGGAL LAHIR PEGAWAI"<<endl;
    cout <<endl;
    cout << "Masukkan Tanggal \t\t: ";
    cin.getline(BP[i].lahir.tgl,20);
    cout << "Masukkan Bulan \t\t\t: ";
    cin.getline(BP[i].lahir.bulan,20);
    cout << "Masukkan Tahun \t\t\t: ";
    cin.getline(BP[i].lahir.tahun,20);
    cout <<endl;
    //tanggal mulai kerja
    cout << "MASUKKAN TANGGAL PEGAWAI MULAI KERJA"<<endl;
    cout <<endl;
    cout << "Masukkan Tanggal \t\t: ";
    cin.getline(BP[i].mulai_kerja.tgl,20);
    cout << "Masukkan Bulan \t\t\t: ";
    cin.getline(BP[i].mulai_kerja.bulan,20);
    cout << "Masukkan Tahun \t\t\t: ";
    cin.getline(BP[i].mulai_kerja.tahun,20);
    cout<<endl;
    }
    cout <<endl <<endl;
    cout << "======================================" <<endl;
    cout << "            Biodata Pegawai           " <<endl;
    cout << "            PT. Makmur KUY            " <<endl;
    cout << "======================================" <<endl;
    char carinip;
    bool found;
	//carinip -> untuk cari nip pegawai
    cout << "Cari Pegawai (NIP) : "; cin >> carinip;
    found = false;
    i=0;
    while ((i<jumlah_indexs)&(!found))
        {
            if (BP[i].NIP[i] == carinip)
                found = true;
                else
                    i = i+1;
        }
	//kondisi nip ketemu
    if (found)
        {
            cout <<endl;
    for(i=0;i<jumlah_indexs;i++){
    cout << "DATA PEGAWAI KE -"<<i+1<<endl;
    cout<<endl;
    cout << "Masukkan NIP \t\t\t: " << BP[i].NIP<<endl;
    cout << "Masukkan Nama \t\t\t: "<< BP[i].nama<<endl;
    cout << "Masukkan Jabatan \t\t: "<< BP[i].jabatan<<endl;
    cout <<endl;
    //alamat
    cout << "MASUKKAN ALAMAT PEGWAI"<<endl;
    cout <<endl;
    cout << "Masukkan Jalan \t\t\t: "<< BP[i].alamat.jalan<<endl;
    cout << "Masukkan Kode POS \t\t: "<<BP[i].alamat.kode_pos<<endl;
    cout << "Masukkan Kota \t\t\t: "<< BP[i].alamat.kota<<endl;
    cout <<endl;
    //tanggal lahir
    cout << "MASUKKAN TANGGAL LAHIR PEGAWAI"<<endl;
    cout <<endl;
    cout << "Masukkan Tanggal \t\t: "<< BP[i].lahir.tgl<<endl;
    cout << "Masukkan Bulan \t\t\t: "<< BP[i].lahir.bulan<<endl;
    cout << "Masukkan Tahun \t\t\t: "<<BP[i].lahir.tahun<<endl;
    cout <<endl;
    //tanggal mulai kerja
    cout << "MASUKKAN TANGGAL PEGAWAI MULAI KERJA"<<endl;
    cout <<endl;
    cout << "Masukkan Tanggal \t\t: "<< BP[i].mulai_kerja.tgl<<endl;
    cout << "Masukkan Bulan \t\t\t: "<< BP[i].mulai_kerja.bulan<<endl;
    cout << "Masukkan Tahun \t\t\t: "<< BP[i].mulai_kerja.tahun<<endl;
    cout<<endl;
    }
        }
    else
        {
        cout <<"NIP [ ";
        cout << carinip; cout << " ] Tidak Terdaftar!! ";
        }
        getch();
    
    

    
}