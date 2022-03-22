#include<iostream>
using namespace std;
int main()
{
    int A[] = {1,2,3,4,5};
    int i;
    int *p = A;
    for(i=0;i<5;i++){
        cout << "Alamat memori : "<< &A[i]<<endl;
        cout << "nilai : "<< *p+i<<endl;
    }
}

