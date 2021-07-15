#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	char c; cin >> c;
	string str(4, c);
	for(int i = 3; i >= 0; --i)
	{
		cout << string(i, ' ') << str << endl;
	}
	return 0;
}