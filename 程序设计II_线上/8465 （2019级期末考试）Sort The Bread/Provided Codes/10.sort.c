
#include <stdio.h> 
 
struct Bread 
{ 
	double price;
	double weight;
	double size;
}; 
 
void read(struct Bread * bread) { 
	scanf("%lf %lf %lf", &bread->price, &bread->weight, &bread->size); 
} 
 
void readArray(struct Bread breads[], int size) { 
	for (int i = 0; i < size; ++ i) { 
		read(breads + i); 
	} 
} 
 
void print(const struct Bread * bread) { 
	printf("%lf %lf %lf\n", bread->price, bread->weight, bread->size); 
} 
 
void printArray(const struct Bread breads[], int size) { 
	for (int i = 0; i < size; ++ i) { 
		print(breads + i); 
	} 
}

#include "source.h"


int main() { 
	struct Bread breads[10]; 
	readArray(breads, 10); 
	sort(breads, 10); 	 
	printArray(breads, 10);
	return 0;
}


