#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
  double a, b, c;
  cin >> a >> b >> c;
  double temp = pow(b * b - 4 * a * c, 0.5);
  cout <<fixed<<setprecision(3)<< (-b - temp) / (2 * a) <<' '<< (-b + temp) / (2 * a);
  return 0;
}
