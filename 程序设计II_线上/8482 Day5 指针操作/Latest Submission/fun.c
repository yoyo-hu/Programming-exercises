
#include <stdio.h>
#include <stdlib.h>
void swap(int* p, int* q) {
	int mi;
	mi = *p;
	*p = *q;
	*q = mi;
}
void print_array(int* p, int size) {
	for (int i = 0; i < size; i++)
		printf("%d\n",p[i]);
}
void print_matrix(int** mat, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (j != col - 1)
            printf("%d ", mat[i][j]);
			else 
            printf("%d\n",mat[i][j]);
		}
	}
}