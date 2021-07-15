#include "String.h"
#include <iostream>
#include<cstring>
STRING::STRING()
{	
   
     length = 0;
     buffer = NULL;
}
STRING::STRING(const char *str)
{
     length = strlen(str);
     buffer = new char[length+1];
     if (buffer!=NULL) 
           strcpy(buffer,str);
}
STRING::~STRING()
{   
     if (buffer)  
          delete []buffer;    
}

STRING& STRING::operator=(const STRING &another)
{	

      length = another.length;

      if (buffer) 
          delete []buffer;

      buffer = new char[length+1];
      if (buffer!=NULL) 
          strcpy(buffer,another.buffer);

      return *this;
}
