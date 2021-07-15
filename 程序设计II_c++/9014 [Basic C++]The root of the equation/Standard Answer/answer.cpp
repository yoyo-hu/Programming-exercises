#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	
	double delta = b * b - 4 * a * c;
	double r1 = (-b - sqrt(delta)) / (2 * a);
	double r2 = (-b + sqrt(delta)) / (2 * a);
	cout << fixed << setprecision(3) << r1 << ' ' << r2 << endl;
	return 0;
}