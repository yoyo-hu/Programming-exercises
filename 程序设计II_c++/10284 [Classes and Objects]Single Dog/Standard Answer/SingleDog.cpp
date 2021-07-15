#include "SingleDog.h"
#include <cstring>

SingleDog::SingleDog(int id, const char* name) : id_(id) {
    name_ = new char[strlen(name)+1];
    strcpy(name_, name);
    count_++;
}

SingleDog::SingleDog(const SingleDog &other) : id_(other.id_) {
    name_ = new char[strlen(other.name_)+1];
    strcpy(name_, other.name_);
    count_++;
}

SingleDog::~SingleDog() {
    delete []name_;
    name_ = NULL;
    count_--;
}

int SingleDog::getCount() {
    return count_;
}

int SingleDog::count_ = 0;