#ifndef COMPLEX_H
#define COMPLEX_H

class COMPLEX
{
public:
	COMPLEX(double r = 0, double i = 0); 
	COMPLEX(const COMPLEX &other);		 
	void print();						 
										 
	COMPLEX operator+(const COMPLEX &other);
	
	COMPLEX operator-(const COMPLEX &other);
	COMPLEX operator-(); 
	COMPLEX operator=(const COMPLEX &other);
  
	COMPLEX &operator++();  
	COMPLEX operator++(int); 
	COMPLEX &operator--();   
	COMPLEX operator--(int); 
protected:
	double real, image; 
};
#endif

