#include "DATE6.h"
#include <iostream>
using namespace std;

int main()
{
	DATE* date1; 
	DATE  date2( 1989, 6, 4 ); 
	
	date1 = &date2;
	date2.Print();
	date1->Print();

	date2.Set(2013,3,3);
	date2.Print();

	DATE* date_ptr; 
	date_ptr = new DATE( 1976, 12, 20 );
	if( date_ptr == NULL ) {
		cout << "error";
		return 1;
	}
	else {
		date_ptr -> Increment();
		date_ptr -> Print();
	}

	delete date_ptr;
	return 0;
}
