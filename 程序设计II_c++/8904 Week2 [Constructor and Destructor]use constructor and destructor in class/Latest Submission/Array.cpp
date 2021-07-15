#include <iostream> 
#include "Array.h"
using namespace std;
ARRAY::ARRAY(int initLenght){
    Length = initLenght;
    p = new float[initLenght];
    cout << "100 bytes have already allocated."<<endl;
}
ARRAY::~ARRAY(){
    Length = 0;
    delete[] p;
    cout << "100 bytes have been released. Bye." << endl;
}