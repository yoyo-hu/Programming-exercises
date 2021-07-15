#include "array.hpp"
#include <iostream>
array::array(unsigned int size){
  _size = size;
  _data = new int[size];
}
array::~array(){
  delete[] _data;
}
unsigned int array::max_size(void){
  return (size_t)_size;
}
int& array::at(const int& i){
  return _data[i];
}
int& array::front(){
  return _data[0];
}
int& array::back(){
  return _data[_size - 1];
}
int*  array::data(){
  return _data;
}
void array::fill(const int& value){
  for (unsigned int i = 0; i < _size;i++){
    _data[i] = value;
  }
}
void array::resize(int newSize){
    int *p=new int[newSize];
	for(unsigned int i=0;i<_size;i++){
		p[i]=_data[i];
	}
	delete[] _data;
	_size=newSize;
	_data=p;
}
void array::sort(int from, int to){
  int mid;
  for (int i = from; i < to-1;i++){
    for (int j = from; j < to - i + from-1;j++){
      if(_data[j]>_data[j+1]){
          mid=_data[j];
          _data[j] = _data[j + 1];
          _data[j + 1] = mid;
      }
    }
  }
}