# [Classes and Objects]Vector-ND (eden)

## Descrption
Please create a class **Vector**.(N-dimension, N >= 2)

The declaration of Vector is in 'Vector.h'

before programing, you should revise the knowledge about constructor and
destructor.

note:

// constructor, print out "construct a vector called vector_name.\n"

**Vector(string, int, int[]);**

// copy constructor, print out "copy a vector called vector_name.\n"

**Vector(const Vector &otherVec);**

// destructor, print out "release memory from a vector called vector_name.\n"

**~Vector();**

// check two vector is whether the same or not

// if same name but the value is not, print like "same name, different
value.\n"

// other conditions are:

//"same name, same value.\n" "different name, same value.\n" "different name,
different value".

**isEqual();**

// set the name of the vector

**void setName(string);**

// display the vecter in the format "vecter_name(1, 2..N)\n"

**void print();**