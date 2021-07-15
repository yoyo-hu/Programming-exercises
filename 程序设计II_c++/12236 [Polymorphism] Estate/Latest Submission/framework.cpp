#include <iostream>
#include <iomanip>
using namespace std;

#include "source.h"


int main(int argc, const char *argv[]) {
  Accountant py;
  Circle *a = new Circle(179, 2938);
  Square *b = new Square(90.8, 1290);
  py.DevelopEstate(a);
  cout << setprecision(10) << py.CheckMoney() << endl;
  py.DevelopEstate(b);
  cout << setprecision(10) << py.CheckMoney() << endl;

  return 0;
}
