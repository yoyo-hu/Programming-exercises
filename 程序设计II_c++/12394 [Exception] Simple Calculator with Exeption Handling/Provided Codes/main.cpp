#include "Exception.hpp"
#include "Calculator.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
  calculator c;
  std::string str;
  bool flag;

  while (cin >> str) {
    flag = false;
    try {
      cout << c.calculate(str) << endl;
    } catch(EmptyExpressionException e) {
      cout << e.what() << endl;
      flag = true;
    } catch(MissingOperatorException e) {
      cout << e.what() << endl;
      flag = true;
    } catch(MissingOperandException e) {
      cout << e.what() << endl;
      flag = true;
    } catch(IllegalSymbolException e) {
      cout << e.what() << endl;
      flag = true;
    } catch(ExpressionException e) {
      cout << e.what() << endl;
      flag = true;
    } catch(Exception e) {
      // unhandled exception
      throw e;
    }
    if (!flag) {
      std::cout << "No exception happened!" << std::endl;
    }
  }

  return 0;
}

