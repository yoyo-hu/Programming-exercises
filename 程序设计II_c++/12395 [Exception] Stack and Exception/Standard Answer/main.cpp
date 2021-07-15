#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    Stack<int> s;
    cout << s.size() << endl;
    for (int i = 10; i < 15; i++) {
        s.push(i);
        cout << s.size() << endl;
    }
    cout << s.size() << endl;
    s.push(12);
    cout << s.top() << endl;
    cout << s.size() << endl;
    s.push(16);
    cout << s.top() << endl;
    cout << s.size() << endl;

    for (int i = 5; i >= 0; i--) {
        try {
            cout << s.top() << endl;
        }
        catch(int int_e) {
            cout << "get top failed" << endl;
        }

        try {
            s.pop();
        }
        catch(double dou_e) {
            cout << "pop failed" << endl;
        }

        cout << s.size() << endl;
    }

    for (int i = 10; i < 15; i++) {
        s.push(i);
        cout << s.size() << endl;
        cout << s.top() << endl;
    }
    return 0;
}

