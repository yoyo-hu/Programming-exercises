#ifndef VECTOR_H
#define VECTOR_H
#include <string>
using namespace std;
 class Vector {
    public:
        Vector() {
            name = "";
            dimension = 0;
            param = NULL;
        }
        Vector(string, int, int[]);
        Vector(const Vector &otherVec);
        ~Vector();
        void isEqual(const Vector &);
        void setName(string);
        void print();
    private:
        string name;
        int dimension, *param;
};
 #endif
 