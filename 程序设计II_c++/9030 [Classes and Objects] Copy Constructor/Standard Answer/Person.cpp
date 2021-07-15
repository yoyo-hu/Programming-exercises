#include "Person.h"


int Person::getId() const {
	return id;
}
Date * Person::getBirthDate() const { 
	return birthDate;
}
Date::Date(int newYear, int newMonth, int newDay) {
	year = newYear;
	day = newDay;
	month = newMonth;
}
int Date::getYear() const {
	return year;
}
void Date::setYear(int newYear) {
	year = newYear;
}
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}
void Date::setMonth(int newMonth) {
	month = newMonth;
}
void Date::setDay(int newDay) {
	day = newDay;
}
Person::Person(int _id, int year, int month, int day) {
	id = _id;
	birthDate = new Date(year, month, day);
}
Person::~Person() {
	delete birthDate;
}
Person::Person(const Person & p) {
	id = p.getId();
	birthDate = new Date(p.getBirthDate() -> getYear(),p.getBirthDate() -> getMonth(), p.getBirthDate() -> getDay());
}