using namespace std;
#include "Integer.h"
INTEGER::INTEGER(int i ){
  value = i;
} // 构造函数
INTEGER::INTEGER(const INTEGER &other){
  value = other.value;
} 
// 拷贝构造函数
// 友元重载加法运算符
INTEGER operator+(INTEGER left, INTEGER right){
  return INTEGER(left.value + right.value);
}
void INTEGER::print(){
  cout << value;
}