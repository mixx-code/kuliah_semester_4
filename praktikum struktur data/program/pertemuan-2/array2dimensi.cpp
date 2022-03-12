#include <iostream>
#include <conio.h>

using namespace std;

int main() {

	int A[3][4]={{2,0,3,0},{4,1,5,1},{6,2,7,2}};
	for (int i=0;i<3;i++){
		for (int j=0;j<4;j++){
			cout<<A[i][j]<<" ";
		}
		cout << endl;
	}
getch();

}
