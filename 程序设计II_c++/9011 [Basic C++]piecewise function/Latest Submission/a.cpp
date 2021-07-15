#include <iostream> 
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
  double x;
  cin>>x;
  if(x<-1)
    x+=1;
  else if(x>=1)
    x = log10(x);
  else  if(x<0)
    x = -x;
  cout <<fixed<<setprecision(2)<< x;
  return 0;
}