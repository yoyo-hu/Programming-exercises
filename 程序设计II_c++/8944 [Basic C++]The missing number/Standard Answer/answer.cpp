#include <iostream>

using namespace std;

int had[6];

int main()
{
	ios::sync_with_stdio(false);
	
	for(int i = 1; i <= 4; ++i)
	{
		int v; cin >> v; had[v] = 1;
	}
	for(int i = 1; i <= 5; ++i) if(!had[i]) cout << i << endl;
	
	return 0;
}
