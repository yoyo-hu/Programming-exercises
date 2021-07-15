#include <iostream>
using namespace std;
int main(){
	int row, col;
	cin >> row >> col;
	int **a = new int *[row];
	for (int i = 0; i < row;i++){
		a[i] = new int[col];
		for (int j = 0; j < col;j++){
			cin >> a[i][j];
			cout<<a[i][j]<<' ';
		}
		cout << endl;
		delete [] a[i];
	}
	delete[] a;
	return 0;
}