#include <iostream>
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
    if(b==0)
    cout <<0<< endl;
    else
	cout << a *1.0/ b << endl;
	return 0;
}