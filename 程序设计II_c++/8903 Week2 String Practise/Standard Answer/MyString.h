#include <cstring>

using std::string;
using std::max;

string MyStringPractise(const string &s1, const string &s2) {
	return s1.substr(0, 3) + s2.substr(max(int(s2.length()) - 3, 0));
}
