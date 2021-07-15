#include <iostream>
#include <cstring>
#include <cmath>
#include <stdio.h>

using namespace std;

class Date {
	public:
		Date(int a, int b, int c):year(a), month(b), day(c) {
		}
		Date():year(0), month(1), day(1) {
		}
		static bool leapyear(int year) {
			if(year%4 == 0) {
				if(year%100 != 0)
					return 1;
				else {
					if(year%400 == 0)
						return 1;
					else
						return 0;
				}
			} else
				return 0;
		}
		int getYear() const {
			return year;
		}
		int getMonth() const {
			return month;
		}
		int getDay() const {
			return day;
		}
		Date & operator=(Date  date2) {
			year = date2.year;
			month = date2.month;
			day = date2.day;
			return *this;
		}

		bool operator==(Date & date2) {
			if(year == date2.year && month == date2.month && day == date2.day)
				return 1;
			else
				return 0;
		}

		bool operator!=(Date & date2) {
			if(!operator==(date2))
				return 1;
			else
				return 0;
		}

		bool operator<(Date & date2) {
			if(year == date2.year) {
				if(month == date2.month) {
					if(day < date2.day)
						return 1;
					else
						return 0;
				} else if(month < date2.month)
					return 1;
				else
					return 0;
			} else if(year < date2.year)
				return 1;
			else
				return 0;
		}

		bool operator<=(Date & date2) {
			if(*this < date2 || *this == date2)
				return 1;
			else
				return 0;
		}

		bool operator>(Date & date2) {
			if(year == date2.year) {
				if(month == date2.month) {
					if(day > date2.day)
						return 1;
					else
						return 0;
				} else if(month > date2.month)
					return 1;
				else
					return 0;
			} else if(year > date2.year)
				return 1;
			else
				return 0;
		}

		bool operator>=(Date & date2) {
			if(*this > date2 || *this == date2)
				return 1;
			else
				return 0;
		}

	private:
		int year;
		int month;
		int day;
};

