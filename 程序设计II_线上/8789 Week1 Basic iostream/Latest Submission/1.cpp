#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	char c;
	int w;
	while(cin>>n){
		cin >> c >> w;
		cout << showpos << left << fixed << setw(w) << setfill(c) << n<<endl;
	}
	return 0;
}