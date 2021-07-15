#include <iostream>
using namespace std;
int main(){
  char x;
  cin >> x;
  for (int i = 3; i >= 0;i--){
    for (int j = 0; j < i;j++)
      cout<<' ';
    cout << x << x << x << x << endl;
  }
    return 0;
}