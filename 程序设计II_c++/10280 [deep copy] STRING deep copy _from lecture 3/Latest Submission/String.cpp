#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;
#include "String.h"
    STRING::STRING(){
        length = 0;
      }
    STRING::STRING(const char *str){
        length = strlen(str);
        buffer=new char[length+1];
        strcpy(buffer, str);
      }
    STRING::~STRING(){
        if(length>0){
          delete [] buffer;
        }
      }
	  STRING& STRING::operator=(const STRING &another){
       if(length>0){
          delete [] buffer;
        }
        length = another.length;
        buffer=new char[length+1];
        strcpy(buffer, another.buffer);
        return *this;
    }