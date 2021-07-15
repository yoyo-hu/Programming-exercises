#include "fun.h"

void swap(int* p, int* q){
	int temp = *p;
	*p = *q;
	*q = temp;
}

void print_array(int p[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d\n", *(p + i));
	}
}

void print_matrix(int** mat, int row, int col){
	int i, j;
	for(i = 0; i < row; i++){
		printf("%d", *(*(mat + i)));
		for(j = 1; j < col; j++){
			printf(" %d", *(*(mat + i) + j));
		}
		printf("\n");
	}
}
