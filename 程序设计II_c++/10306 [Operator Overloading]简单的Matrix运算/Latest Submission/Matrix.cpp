#include <iostream>
#include"Matrix.h"
using namespace std;
int main() {
 int row, col;
 cout << "input the row and the col for Matrix a, b" << endl;
 cin >> row >> col;
 Matrix a(row, col), b(row, col), c(a), d;
 cout << endl << "Matrix a:" << endl;
 a.display();
 cout << endl << "Matrix b:" << endl;
 b.display();
 c = a + b;//用重载运算符“+”实现两个矩阵相加 
 cout << endl << "Matrix c = Matrix a + Matrix b :" << endl;
 c.display();
 cout << endl << "Matrix a transpose to Matrix d:" << endl;
 d = a.transpose();
 d.display();
 return 0;
}