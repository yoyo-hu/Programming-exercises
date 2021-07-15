// Problem#: 17975
// Submission#: 4698436
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
using namespace std;
class MyClass {
  int data;
 public:
  MyClass(int d) {
   data=d;
  }
  void printData() {
   cout << data << endl;
  }
  int sumIt() {
   return (data*(data+1))/2;
  }
};

