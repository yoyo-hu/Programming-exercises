#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Date {
	public:
		Date(int newYear, int newMonth, int newDay);
		int getYear() const;
		void setYear(int newYear);
		int getMonth() const;
		void setMonth(int);
		int getDay() const;
		void setDay(int);

	private:
		int year;
		int month;
		int day;
};

class Person {
	public:
		Person(int _id, int year, int month, int day);
		Person(const Person &); // copy constructor
		~Person();
		int getId() const;
		Date * getBirthDate() const;

	private:
		int id;
		Date *birthDate;
};


#endif