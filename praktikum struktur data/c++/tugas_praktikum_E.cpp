#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int A[3][4]={{1,3,4,5},{2,4,6,8},{4,5,7,9}};
	for (int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			cout<<A[i][j]<<" ";
		}
		cout << endl;
	}
getch();

}
