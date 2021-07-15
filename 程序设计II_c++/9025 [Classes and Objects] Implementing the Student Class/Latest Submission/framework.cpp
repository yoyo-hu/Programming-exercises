#include <iostream>
#include <cstring>
#include "source.h"

using namespace std;


int main()
{
  //freopen("D:\\1-Teaching\\��������II\\9.8.in", "r", stdin);
  //freopen("D:\\1-Teaching\\��������II\\9.8.out", "w", stdout);
  Student std1, std2(123, "Larry Jordan", 18), std3(124);
  std1.set(100, "Steven Gates", 61);
  std1.print();
  std2.print();
  std3.print();
  return 0;
}
