#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
#include "1000.cpp"

int main()
{
 MyClass mc(103);
 mc.printData(); 
 cout << mc.sumIt() << endl;

 MyClass mc1(1);
 mc1.printData();
 cout << mc1.sumIt() << endl;
 return 0;
}
