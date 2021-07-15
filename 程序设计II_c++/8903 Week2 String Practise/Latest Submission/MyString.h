#include <iostream>
using std::string;
using std::cin;
using std::cout;
using std::endl;
string MyStringPractise(const string &s1, const string &s2){
    string s;
    if(s1.size()<3)
        s = s1;
    else
        s = s1.substr( 0, 3);
    if(s2.size()<3)
        s += s2;
    else
        s.append(s2, s2.size() - 3, s2.size());
    return s;
}
