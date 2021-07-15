class Shape{
	public:
	Shape(){};
	virtual double GetArea()=0;
	virtual double GetPerim()=0;
};
class Rectangle:public Shape{
	double lenth;
	double width;
	public:
	Rectangle(double lenth_,double width_):lenth(lenth_),width(width_){}
	double GetArea(){
		return lenth*width;
	}
	double GetPerim(){
		return (lenth+width)*2;
	}
};
class Circle:public Shape{
	double radius;
	public:
	Circle(double radius_):radius(radius_){}
	double GetArea(){
		return PI*radius*radius;
	}
	double GetPerim(){
		return 2.0*PI*radius;
	}
};