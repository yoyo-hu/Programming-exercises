#include <iostream>
using namespace std;
class Matrix
 //定义Matrix类  
{
public:
 Matrix();                                           //构造函数
 ~Matrix();                                          //析构函数
 Matrix(const Matrix &);                                   //拷贝构造函数
 Matrix(int row, int col);                           //默认构造函数  
 Matrix operator+(const Matrix &)const;        //重载运算符“+”
 Matrix operator=(const Matrix &);                         //重载运算符“=”
 Matrix transpose()const;                                 //矩阵的转置
 void display()const;                                     //输出数据函数   
private:
 int row;                                            //矩阵的行
 int col;                                            //矩阵的列
 int** mat;                                          //用于储存矩阵
};
Matrix::Matrix() {
 row = 0;
 col = 0;
 mat = NULL;
}
Matrix::~Matrix() {
 if(mat != NULL){
  for (int i = 0; i < row; i++) {
   delete[]mat[i];
  }
 delete[]mat;
 mat = NULL;
 }
}
Matrix::Matrix(const Matrix& a) {
 row = a.row;
 col = a.col;
 mat = new int*[row];
 for (int i = 0; i < row; i++) {
  mat[i] = new int[col];
 }
 for (int i = 0; i < row; i++) {
  for (int j = 0; j < col; j++) {
   mat[i][j] = a.mat[i][j];
  }
 }
}
Matrix::Matrix(int row, int col)
//定义构造函数 
{
 this->row = row;
 this->col = col;
 mat = new int*[row];
 for (int i = 0; i < row; i++) {
  mat[i] = new int[col];
 }
 for (int i = 0; i<row; i++)
  for (int j = 0; j<col; j++)
   cin >> mat[i][j];
}
Matrix Matrix::operator+(const Matrix &b)const
//定义重载运算符“+”函数 
{
 Matrix c(b);
 for (int i = 0; i<b.row; i++)
  for (int j = 0; j<b.col; j++)
  {
   c.mat[i][j] = mat[i][j] + b.mat[i][j];
  }
 return c;
}
Matrix Matrix::operator=(const Matrix& a)
{
 row = a.row;
 col = a.col;
 if (mat == NULL) {
  mat = new int*[row];
  for (int i = 0; i < row; i++) {
   mat[i] = new int[col];
  }
 }
 for (int i = 0; i < row; i++) {
  for (int j = 0; j < col; j++) {
   mat[i][j] = a.mat[i][j];
  }
 }
 return *this;
}

Matrix Matrix::transpose()const {
 Matrix d;
 d.row = col;
 d.col = row;
 d.mat = new int*[col];
 for (int i = 0; i < col; i++) {
  d.mat[i] = new int[row];
 }
 for (int j = 0; j < col; j++)
  for (int i = 0; i < row; i++)
  {
   d.mat[j][i] = mat[i][j];
  }
 return d;
}

void Matrix::display()const
//定义输出数据函数 
{
 for (int i = 0; i<row; i++) {
  for (int j = 0; j<col; j++) {
   cout << mat[i][j] << " ";
  }
  cout << endl;
 }
}
