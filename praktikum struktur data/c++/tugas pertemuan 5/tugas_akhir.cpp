#include <iostream>
using namespace std;

int character(const char*);

int main()
{
    cout<<"\nProgram untuk menghitung banyaknya karakter pada kaliamat  "<<endl;

    char kata [50];
    cout<<"\nMasukan Kalimat = ";
    cin.getline(kata,50);
    cout<<"\nJumlah Karakter Kalimat Tersebut = "<<character(kata)<<" Karakter\n ";

    return 0;
}

int character(const char*n)
{
    int i=0;
    for(;*n!='\0';n++)
    ++i;
    return i;
}
