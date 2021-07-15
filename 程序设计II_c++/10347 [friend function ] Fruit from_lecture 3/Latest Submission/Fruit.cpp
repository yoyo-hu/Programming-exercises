#include "Fruit.h"
Fruit::Fruit(){}
ostream& operator << (ostream& out, const Fruit& x){
    out << x.name << ' ' << x.color<<endl;
    return out;
}
istream& operator >> (istream& in,  Fruit& x){
    in >> x.name >> x.color;
    return in;
}