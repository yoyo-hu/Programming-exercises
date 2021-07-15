#include <iostream>
using namespace std;
class Point;

class Vector {
	public :
		Vector() : x_(0), y_(0) {
		}
		Vector(int x, int y) : x_(x), y_(y)  {
		}
		Vector(const Vector &other) {
			this->x_ = other.x_;
			this->y_ = other.y_;
		}
		Vector operator+(const Vector &other) {
			Vector t;
			t.x_ = this->x_ + other.x_;
			t.y_ = this->y_ + other.y_;
			return t;
		}
		friend Point operator+(const Point &point, const Vector &other);
		friend ostream& operator << (ostream &out, const Vector & vect);
	private :
		int x_;
		int y_;

};

class Point {
	public :
		Point() : x_(0), y_(0) {
		}
		Point(int x ,int y) : x_(x), y_(y) {
		}
		Point(const Point &other) {
			this->x_ = other.x_;
			this->y_ = other.y_;
		}
		friend Point operator+(const Point &point, const Vector &other);
		friend ostream& operator << (ostream &out, Point &point);
	private:
		int x_;
		int y_;

};

Point operator+(const Point &point, const Vector &other) {
	Point t;
	t.x_ = point.x_ + other.x_;
	t.y_ = point.y_ + other.y_;
	return t;
}

ostream& operator << (ostream &out, const Vector & vect) {
	out << vect.x_ << " " << vect.y_;
	return out;
}
ostream& operator << (ostream &out, Point &point) {
	out << point.x_ << ' ' << point.y_;
	return out;
}

