#ifndef CALCULATOR_HPP_
#define CALCULATOR_HPP_
#include "Exception.hpp"
#include <string>
#include <vector>
#include <assert.h>

class calculator {
 private:
  bool isNumber(char c) { return (c >= '0' && c <= '9'); }
  bool isOperator(char c) { return (c == '+' || c == '-'); }

 public:
  calculator() {}
  int calculate(std::string expression) {
    if (expression.empty()) {
      throw EmptyExpressionException();
    }

    int answer = 0;

    if (isNumber(expression[0])) {
      answer = expression[0] - '0';
    } else {
      if (isOperator(expression[0])) {
        throw MissingOperandException(0);
      } else {
        throw IllegalSymbolException(0);
      }
    }

    for (int i = 1; i < expression.length() - 1;) {
      if (isOperator(expression[i]) && isNumber(expression[i + 1])) {
        if (expression[i] == '+') {
          answer += expression[i + 1] - '0';
        } else if (expression[i] == '-') {
          answer -= expression[i + 1] - '0';
        } else {
          assert(false);
        }
        i += 2;
      } else {
        if(!isOperator(expression[i]) && !isNumber(expression[i])) {
          throw IllegalSymbolException(i);
        }
        if(isNumber(expression[i])) {
          throw MissingOperatorException(i);
        }
        if(isOperator(expression[i]) && isOperator(expression[i+1])) {
          throw MissingOperandException(i+1);
        }
        if(isOperator(expression[i])
        && (!isOperator(expression[i+1]
          && !isOperator(expression[i+1])))) {
          throw IllegalSymbolException(i+1);
        }
        assert(false);
      }
    }

    if (expression.length() % 2 == 0) {
      if (isOperator(expression[expression.length() - 1])) {
        throw MissingOperandException(expression.length());
      } else if (isNumber(expression[expression.length() - 1])) {
        throw MissingOperatorException(expression.length() - 1);
      } else {
        throw IllegalSymbolException(expression.length()-1);
      }
    }

    return answer;
  }
};
#endif
