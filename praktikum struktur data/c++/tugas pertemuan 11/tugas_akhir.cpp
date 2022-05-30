#include<iostream>
#include<stdio.h>
#include<conio.h>

int MAXSTACK; typedef int itemtype;

typedef struct{
itemtype item[300]; int count;}
stack;
void initializestack(stack *s){
s->count = 0;}
int empty(stack *s){
return (s->count == 0);}
int full(stack *s){
return (s->count == MAXSTACK);}
void push(itemtype x, stack *s){
if(full(s))
printf("stack penuh !\n");
else{
s->item[s->count]=x; ++(s->count); }}
int pop(stack *s) {
if(empty(s))
printf("  Stack Kosong ");
else {
--(s->count);
return (s->item[s->count]); }}
using namespace std;
main() {
int i, n, m, l, z; int input;
stack tumpukan;
printf("  Program Pengkonversi Desimal ke Biner ");
cout<<endl<<endl;
initializestack(&tumpukan);
printf("  Masukkan Bilangan Desimal       : ");
scanf("%d", &input);
for(z=1,n=input;n>0;n=n/2, z++) {
MAXSTACK=z; }
m=0;
for(n=input;n>0;n=n/2) {
l=n%2;
push(l,&tumpukan);
++m; }
cout<<endl;
printf("  Hasil Konversi Ke Bilangan Biner : ");
for(i=MAXSTACK;i>0;i--) {
printf("%d", pop(&tumpukan)); }
getch();
return 0; }
