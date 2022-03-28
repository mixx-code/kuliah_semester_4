#include<iostream>
using namespace std;
int main()
{
    int A[2][3] = {{1,2,3},{4,5,6}};
    A[0];
    A[1];
    int (*p)[3]=A;


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout <<"Nilai A "<<"["<<i<<"]"<<"["<<j<<"] = "<< A[i][j] << " dan alamatnya = " ;cout << &A[i][j] << "  " << endl;

        }
    }
}

