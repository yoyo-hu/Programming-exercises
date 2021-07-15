#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     double R;
     const double PI = 3.14159265358979;
     double result;
     cin >> R;
     result=PI * R * R;
     cout <<fixed<<setprecision(8)<< result;
     return 0;
}