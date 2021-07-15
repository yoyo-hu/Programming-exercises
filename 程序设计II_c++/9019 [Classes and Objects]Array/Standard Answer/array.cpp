#include "array.hpp"
 
array::array(size_t _size) {
  this->_size = _size;
  this->_data = new data_type[_size]();
}
 
array::~array() { delete[] this->_data; }
 
array::size_t array::max_size(void) { return this->_size; }
 
array::data_type& array::at(const data_type& i) { return _data[i]; }
 
array::data_type& array::front() { return _data[0]; }
 
array::data_type& array::back() { return _data[_size - 1]; }
 
array::pointer array::data() { return _data; }
 
void array::fill(const data_type& value) {
  for (int i = 0; i < _size; i++) {
    _data[i] = value;
  }
}
 
void array::resize(int newSize) {
  data_type* temp = new data_type[newSize]();
  for (int i = 0; i < _size; i++) {
    temp[i] = _data[i];
  }
  delete[] _data;
  _data = temp;
  _size = newSize;
}
 
void array::sort(int from, int to) {
  // insertion sort
  for (int i = from + 1; i < to; i++) {
    int key = _data[i];
    int j = i - 1;
    while (j >= from && _data[j] > key) {
      _data[j + 1] = _data[j];
      j--;
    }
    _data[j + 1] = key;
  }
}