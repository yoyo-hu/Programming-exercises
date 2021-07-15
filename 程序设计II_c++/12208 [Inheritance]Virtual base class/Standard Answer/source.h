#include <iostream>
#include <string>
class base {
		string name;
		int age;
	public:
		base() {}
		void setname(const string str) {
			name = str;
		};
		void setage(const int age) {
			this->age = age;
		};
		string getname() const{
			return name;
		};
		int getage() const{
			return age;
		};
};

class leader: virtual public base {
	private:
		string job;
		string department;
	public:
		void setjob(const string str) {
			job = str;
		};
		void setdep(const string str) {
			department = str;
		};
		string getjob() const{
			return job;
		}
		string getdep() const{
			return department;
		}
};

class engineer: virtual public base {
	private:
		string major;
		string profession;
	public:
		void setmajor(const string str) {
			major = str;
		};
		void setprof(const string str) {
			profession = str;
		};
		string getmajor() const{
			return major;
		}
		string getprof() const{
			return profession;
		}
};

class chairman: public leader, public engineer {
};

