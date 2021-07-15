#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979;

int main()
{
 double r; cin >> r;
 cout << fixed << setprecision(8) << r * r * PI << endl;
 return 0;
}