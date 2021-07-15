#include <stdio.h>
#include "fun.h"

int main(void){
	int a = 1, b = 2;
	swap(&a, &b);
	printf("%d %d\n", a, b);
	
	int c[5] = {1, 2, 3, 4, 5};
	print_array(c, 5);
	
	int** d = (int**) malloc(sizeof(int*) * 3);
	int i, j;
	for(i = 0; i < 3; i++){
		*(d + i) = (int*) malloc(sizeof(int) * 3);
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			*(*(d + i) + j) = i + j + 1; 
		}
	}
	print_matrix(d, 3, 3);
	for(i = 0; i < 3; i++){
		free(*(d + i));
	}
	return 0;
}

