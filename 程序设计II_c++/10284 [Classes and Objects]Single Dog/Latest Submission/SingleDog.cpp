#include "SingleDog.h"
#include <cstring>
int SingleDog::count = 0;
    SingleDog::SingleDog(int id_, char* name_):id (id_){
      name = new char[strlen(name_)+1];
      strcpy(name, name_);
      count++;
    }

    //copy constructor
    SingleDog::SingleDog(const SingleDog &other):id (other.id){
      name = new char[strlen(other.name)+1];
      strcpy(name, other.name);
      count++;
    }
    //desctructor
    SingleDog::~SingleDog(){
      if(name)
        delete[] name;
      count--;
    }

    //return the count of single dog
    int SingleDog::getCount(){
      return SingleDog::count;
    }