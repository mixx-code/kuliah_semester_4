#include <conio.h>
#include <iostream>
using namespace std;
main(){
int s,i,posisi;
int A[20]={45,4,87,1,8,3,6,89,34,98,43,2,54,7,8,42,35,5,32,20};
cout<<"Data : ";
for(i=0;i<20;i++){
cout<<A[i]<<" ";
}
cout<<"\nData yang ingin dicari : ";
cin>>s;
i=0;
posisi=0;
while(i<19 && A[i]!=s){
i++;
}
if (A[i]!=s){
cout<<"Maaf data yang dicari tidak ada";
}else if(posisi=i+1)
cout<<"ditemukan pada posisi ke "<<posisi;
getch();
}