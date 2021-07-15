#include <iostream>
#include "MyString.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

string MyStringPractise(const string &s1, const string &s2);

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	cout << MyStringPractise(s1, s2) << endl;
	return 0;
}