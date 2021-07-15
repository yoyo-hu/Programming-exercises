#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double x;
  cin >> x;
  if(x>100||x<0)
    cout << "Invalid";
  else if(x<60)
    cout << "Failed";
  else
    cout << fixed << setprecision(1) << (x - 50) / 10;
  return 0;
}