# [STL] map and pair _from lecture 8

## Description
Implement the following operations:

**Note: the key in map m is A~Z, and the corresponding value is  its ASCII**
```
#include <iostream>
#include <map>
using namespace std;
int main() {
	map <char, int>m;
	int i;
	
	//put pairs into map
	//your code
	
	char ch;
	cout <<"enter key:";
	cin >>ch;
	map<char, int>::iterator p;
	
	//find value given key ch
	//your code
	
	if (p!=m.end())
		cout <<"Its ASCII value is " <<p->second;
	else
		cout <<"Key not in map." ;
	return 0;
}
```
## Input
```
A
```
## Output
```
enter key:
Its ASCII value is 65

```