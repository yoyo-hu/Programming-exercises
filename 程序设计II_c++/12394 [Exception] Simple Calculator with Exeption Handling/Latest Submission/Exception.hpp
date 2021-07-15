#ifndef EXCEPTION_HPP_
#define EXCEPTION_HPP_
#include <sstream>
#include <string>

class Utils {
 public:
  static std::string int2String(int num) {
    std::stringstream ss;
    ss << num;
    return ss.str();
  }
};

class Exception {
 public:
  virtual const std::string what() const throw() { return "Exception occors"; };
};

class ExpressionException : public Exception {
 public:
  virtual const std::string what() const throw() {
    return "ExpressionException";
  }
};

class IllegalSymbolException : public ExpressionException {
 private:
  int position;

 public:
  IllegalSymbolException(int position) : position(position) {}
  virtual const std::string what() const throw() {
    return "IllegalSymbolException at position:" + Utils::int2String(position);
  }
};

class MissingOperatorException : public ExpressionException {
 private:
  int position;

 public:
  MissingOperatorException(int position) : position(position) {}
  virtual const std::string what() const throw() {
    return "Expected operator at position:" + Utils::int2String(position);
  }
};

class MissingOperandException : public ExpressionException {
 private:
  int position;

 public:
  MissingOperandException(int position) : position(position) {}
  virtual const std::string what() const throw() {
    return "Expected operand at position:" + Utils::int2String(position);
  }
};

class EmptyExpressionException : public ExpressionException {
 public:
  EmptyExpressionException() {}
  virtual const std::string what() const throw() {
    return "The expression is empty";
  }
};

#endif

