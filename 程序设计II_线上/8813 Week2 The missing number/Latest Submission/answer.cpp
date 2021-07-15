#include <iostream> 
using namespace std;

int  main() 
{
	int sum = 1 + 2 + 3 + 4 + 5;
	int x;
	for (int i = 0; i < 4;i++){
		cin >> x;
		sum -= x;
	}
	cout << sum;
	return 0;
}