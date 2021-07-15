#include <iostream>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{
	int num;
	cin >> num;
	
	if(num < 0 || num > 100) {cout << "Invalid" << endl; return 0;}
	if(num < 60) {cout << "Failed" << endl; return 0;}

	printf("%.1lf\n", (num - 50.0) / 10.0);
	
	return 0;
}