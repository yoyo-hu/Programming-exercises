#include <iostream>
using namespace std;
class Point
{  
    int x,y;
public:
    Point(int _x,int _y):x (_x), y (_y){}
    void Move(int x_move,int y_move){
      x += x_move;
      y += y_move;
    }
    int Getx() const{
      return x;
    }
    int Gety() const{
      return y;
    }
};
class Rectangle:public Point{
  int length,width;
  public:
  Rectangle(int _x,int _y,int _length,int _width):Point(_x,_y),length(_length),width(_width){}
  int Getwidth()const{
    return width;
  }
  int Getlength()const{
    return length;
  }
  int Getarea()const{
    return width * length;
  }
};
