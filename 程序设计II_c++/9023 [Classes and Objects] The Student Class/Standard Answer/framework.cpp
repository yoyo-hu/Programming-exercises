#include <iostream>
#include <cstring>
#include "source.h"
using namespace std;


int main()
{
  
  Student std1, std2(123, "Larry Jordan", 18), std3(124);
  set(std1, 100, "Steven Gates", 61);
  print(std1);
  print(std2);
  print(std3);
  return 0;
}
