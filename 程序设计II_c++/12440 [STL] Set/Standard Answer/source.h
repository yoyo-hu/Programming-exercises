#include <iostream>
#include <set>
using namespace std;
int sumOfIntersection(const set<int>& set1, const set<int>& set2);

int sumOfIntersection(const set<int>& set1, const set<int>& set2) {
	set<int>::iterator i;
	int total = 0;
	for (i = set2.begin(); i != set2.end(); ++i) {
		if (set1.find(*i) != set1.end()) {
			total += *i;
		}
	}
	return total;
}

