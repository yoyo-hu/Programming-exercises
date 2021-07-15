	#include "Person.h"
    Date::Date(int newYear, int newMonth, int newDay){
      year = newYear, month = newMonth, day = newDay;
    }
		int Date::getYear() const{
      return year;
    }
		void Date::setYear(int newYear){
      year = newYear;
    }
		int Date::getMonth() const{
      return month;
    }
		void Date::setMonth(int newMonth){
      month = newMonth;
    }
		int Date::getDay() const{
      return day;
    }
		void Date::setDay(int newDay){
      day = newDay;
    }
    Person::Person(int _id, int year, int month, int day){
      id = _id;
      birthDate = new Date(year, month, day);
    }
	Person::Person(const Person &other){
      id = other.id;
     birthDate = new Date(other.birthDate->getYear(), other.birthDate->getMonth(), other.birthDate->getDay());
    } // copy constructor
		Person::~Person(){
      delete birthDate;
    }
		int Person::getId() const{
      return id;
    }
		Date * Person::getBirthDate() const{
      return birthDate;
    }