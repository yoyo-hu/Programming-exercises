#include <iostream>
class Matrix
    //定义Matrix类  
{private:
    int row;                                            //矩阵的行
    int col;                                            //矩阵的列
    int** mat; 
 public:
    Matrix(){
        row = 0;
        col = 0;
    }                                           //默认构造函数
    ~Matrix(){
        for (int i = 0; i < row;i++)
            delete[] mat[i];
        if(row!=0)
            delete[] mat;
    }                                          //析构函数
    Matrix(const Matrix & other){
        row = other.row;
        col = other.col;
        mat=new int*[row];
        for (int i = 0; i < row;i++){
            mat[i] = new int[col];
            for (int j = 0; j < col;j++){
                mat[i][j] = other.mat[i][j];
            }
        }
    }                             //拷贝构造函数
    Matrix(int r, int c){
        row = r;
        col = c;
        mat=new int*[row];
        for (int i = 0; i < row;i++){
            mat[i] = new int[col];
            for (int j = 0; j < col;j++){
                std::cin>>mat[i][j];
            }
        }
    }                          //含参数构造函数  
    Matrix operator+(const Matrix & other)const{
        for (int i = 0; i < row;i++){
            for (int j = 0; j < col;j++){
                other.mat[i][j] += mat[i][j];
            }
        }
        return other;
    }              //重载运算符“+”
    Matrix& operator=(const Matrix & other){
        if(other.row==row&&other.col==col){
            for (int i = 0; i < row;i++){
            for (int j = 0; j < col;j++){
                mat[i][j] = other.mat[i][j];
            }
            }
        }
        else{
            for (int i = 0; i < row;i++)
            delete[] mat[i];
            if(row!=0)
            delete[] mat;
            row = other.row, col = other.col;
            mat=new int*[row];
            for (int i = 0; i < row;i++){
            mat[i] = new int[col];
            for (int j = 0; j < col;j++){
                mat[i][j] = other.mat[i][j];
            }
            }
        }
        return *this;
    }                  //重载运算符“=”
    Matrix transpose()const{
        Matrix temp;
        temp.col=row;
        temp.row=col;
        temp.mat = new int *[temp.row];
        for (int i = 0; i < temp.row;i++){
            temp.mat[i] = new int[temp.col];
        for (int j = 0; j < temp.col;j++){
            temp.mat[i][j] = mat[j][i];
        }
        }
        return temp;
    }                            //矩阵的转置
    void display()const{
        for (int i = 0; i < row;i++){
            for (int j = 0; j < col;j++){
                std::cout<<mat[i][j]<<' ';
            }
            std::cout << std::endl;
        }
    }                                //输出数据函数                                            //用于储存矩阵
};