#include "array.hpp"
#include <iostream>
 
int main() {
  int n;
 
  std::cin >> n;
 
  array a(n);
 
  for (int i = 0; i < n; i++) {
    std::cin >> a.data()[i];
  }
 
  std::cout << "array size:" << a.max_size() << std::endl;
  std::cout << "array front:" << a.front() << std::endl;
  std::cout << "array back:" << a.back() << std::endl;
 
  int* data = a.data();
  std::cout << "array elements using data:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << data[i] << " ";
  }
  std::cout << std::endl;
 
  std::cout << "array elements using at:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  std::cout << "array fill:" << std::endl;
  a.fill(9);
  for (int i = 0; i < n; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  for (int i = 0; i < n; i++) {
    std::cin >> a.at(i);
  }
 
  std::cout << "array assign:" << std::endl;
  for (int i = 0; i < n; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  std::cout << "sort the array:" << std::endl;
  a.sort(0, a.max_size());
  for (int i = 0; i < n; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  int m;
  std::cin >> m;
 
  a.resize(n + m);
 
  for (int i = n; i < n + m; i++) {
    std::cin >> a.at(i);
  }
 
  std::cout << "resize and then input:(max size:" << a.max_size() << ")"
            << std::endl;
  for (int i = 0; i < n + m; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  std::cout << "resize and then sort:" << std::endl;
 
  a.sort(n + m / 2, m + n);
 
  for (int i = n + m / 2; i < n + m; i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
 
  return 0;
}
 