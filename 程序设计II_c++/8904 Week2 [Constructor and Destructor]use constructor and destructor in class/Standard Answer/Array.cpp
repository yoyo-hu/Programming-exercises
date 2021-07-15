#include <iostream> 
#include "Array.h"
using namespace std;

ARRAY::ARRAY( int initLength )
{
    Length = initLength;
    p = new float[ Length ];
    cout << Length << " bytes have already allocated." << endl;
}
ARRAY::~ARRAY()
{
    delete []p;
    cout << Length << " bytes have been released. Bye." << endl;
}