using namespace std;
class Object{
	public:
	virtual string getName(){
		return "Object";
	}
};
 
class Animal:public Object{
	public:
	string getName(){
		return "Animal";
	}
};
class Dog:public Animal{
	public:
	string getName(){
		return "Dog";
	}
};
class Cat:public Animal{
	string name;
	public:
	string getName(){
		return "Cat";
	}
};
 
class Vehicle:public Object{
	public:
	string getName(){
		return "Vehicle";
	}
};
class Bus:public Vehicle{
	public:
	string getName(){
		return "Bus";
	}
};
class Car:public Vehicle{
	public:
	string getName(){
		return "Car";
	}
};
 
class Person:public Object{
	public:
	string getName(){
		return "Person";
	}
};
class Student:public Animal{
	public:
	string getName(){
		return "Student";
	}
};
class Teacher:public Animal{
	public:
	string getName(){
		return "Teacher";
	}
};
/*
 * 一个Object对象
 * 返回这个对象实例实际的类型名
 * 例如： Object *obj = new Bus();
 * 则instanceof(*obj) == "Bus"
 */
string instanceof(Object& obj){
	return obj.getName();
}
