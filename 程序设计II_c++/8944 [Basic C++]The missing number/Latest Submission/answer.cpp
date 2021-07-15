#include <iostream>
using namespace std;
int main(){
     int sum = 15;
     int time=4;
     int x;
     while(time){
          cin>>x;
          sum-=x;
          time--;
     }
     cout << sum;
}