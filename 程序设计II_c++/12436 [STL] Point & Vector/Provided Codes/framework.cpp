#include <iostream>
#include "source.h"
using namespace std;
/*
class Point;

class Vector {
  public:
    Vector() {}
    explicit Vector(int x, int y) : x_(x), y_(y) {}
    Vector(const Vector &other);
    Vector operator+(const Vector &other);
    friend Point operator+(const Point &point, const Vector &other);
    friend ostream& operator<<(ostream &out, Vector &vect);
  private:
    int x_;
    int y_;
};

class Point {
  public:
    Point() {}
    explicit Point(int x, int y) : x_(x), y_(y) {}
    Point(const Point &other);
    friend Point operator+(const Point &point, const Vector &other);
    friend ostream& operator<<(ostream &out, Point &point);
  private:
    int x_;
    int y_;
};

Vector::Vector(const Vector &other) {
  x_ = other.x_;
  y_ = other.y_;
}

Point::Point(const Point &other) {
  x_ = other.x_;
  y_ = other.y_;
}

Vector Vector::operator+(const Vector &other) {
  Vector tmp;
  tmp.x_ = x_ + other.x_;
  tmp.y_ = y_ + other.y_;
  return tmp;
}

Point operator+(const Point &point, const Vector &other) {
  Point tmp;
  tmp.x_ = point.x_ + other.x_;
  tmp.y_ = point.y_ + other.y_;
  return tmp;
}

ostream& operator<<(ostream &out, Vector &vect) {
  out << vect.x_ << ' ' << vect.y_;
  return out;
}

ostream& operator<<(ostream &out, Point &point) {
  out << point.x_ << ' ' << point.y_;
  return out;
}
*/
int main() {
  Vector a(1, 2);
  Vector b(2, 3);
  Point x(0, 1);
  Vector c;
  c = a + b;
  x = x + c + a;
  cout << c << endl;
  cout << x << endl;
  return 0;
}
