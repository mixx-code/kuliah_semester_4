#include <iostream>
#include <conio.h>
using namespace std;

void tukar(int *a, int *b);

main()
{
    int a=8, b=-5;
    cout    << "nilai a dan b seblumnya : " << a << " & " << b;
    tukar(&a,&b);
    cout    << "\nnilai a dan b setelah ditukar : " << a << " & " << b;
    getch();
}
void tukar(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;

}

