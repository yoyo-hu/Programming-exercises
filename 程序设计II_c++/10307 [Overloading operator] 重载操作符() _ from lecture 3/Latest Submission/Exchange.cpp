#include "Exchange.h"
void Exchange::operator()(int& i,int& j){
    int mi = i;
    i = j;
    j = mi;
}