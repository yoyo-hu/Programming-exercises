#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	double d_x, d_y;
	char arr[10][11];
	cin >> a >> b >> d_x >> d_y;
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
	}
	cout << pow(a, b) << endl;
	cout << d_x*d_y << endl;
	for (int i = 9; i >= 0; --i) {
		cout << arr[i] << endl;
	}
	return 0;
}