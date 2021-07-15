#include <iostream>
using namespace std;

class SingleDog {
public:
    //constructor
    SingleDog(int id, const char* name);

    //copy constructor
    SingleDog(const SingleDog &other);

    //desctructor
    ~SingleDog();

    //return the count of single dog
    static int getCount();

    //print some infomation
    void print() const {
        cout << "SingleDog " << id_ << ". My name is " << name_ << endl;
    }

private:
    const int id_; 
    char *name_; 
    static int count_; // the count of single dog
};