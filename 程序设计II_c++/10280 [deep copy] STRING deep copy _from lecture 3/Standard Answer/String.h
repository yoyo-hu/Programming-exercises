#ifndef STRING_H
#define STRING_H
#include <iostream>
using namespace std;

class STRING {
private:	
      int     length;
      char  *buffer;
public:	
      STRING();
      STRING(const char *str);
      ~STRING();
	  STRING& operator=(const STRING &another);
};

#endif
