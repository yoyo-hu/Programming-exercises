#include "Integer.h"
#include <iostream>
#include<cstring>
INTEGER::INTEGER(int i)
{	
	value = i;
}

INTEGER::INTEGER(const INTEGER& other)
{	
	value = other.value;
}

INTEGER operator + (INTEGER left, INTEGER right)	
{	
      INTEGER temp;
      temp.value = left.value + right.value;
      return temp;
}

void INTEGER::print(){
     cout<<this->value;
}
