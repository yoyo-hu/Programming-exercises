#include <iostream>
#include <sstream>
#include <string>
#include "Stack.hpp"
using namespace std;

void TestPushAndPop(Stack& s) {
  static int num = 0;
  for (int i = 0; i < 5; i++) {
    s.push(num++);
    cout << "push " << num << endl;
  }

  for (int i = 0; i < 7; i++) {
    if (s.empty()) {
      cout << "stack is empty!" << endl;
    } else {
      cout << "pop " << s.top() << endl;
      s.pop();
    }
  }

  for (int i = 0; i < 5; i++) {
    s.push(num++);
    cout << "push " << num << endl;
  }
}


int main() {
    cout << "----- Stack s1 -----" << endl;
    Stack s1;
    TestPushAndPop(s1);

    cout << "----- Stack s2 -----" << endl;
    Stack s2(s1);
    TestPushAndPop(s2);

    cout << "s1: " << s1 << endl
         << "s2: " << s2 << endl;


    stringstream ss;
    string str_s1, str_s2;
    ss << s1 << endl << s2;
    ss >> str_s1 >> str_s2;

    cout << "s1: " << str_s1 << endl
         << "s2: " << str_s2 << endl;

    return 0;
}