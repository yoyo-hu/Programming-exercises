#include <stdio.h>
#include <stdlib.h>
int* Catenate(int a[], int b[], int len1, int len2) {
	int* c = (int*)malloc((len1 + len2) * sizeof(int));
	for (int i = 0; i < len1; ++i)
		c[i] = a[i];
	for (int i = len1; i < len2+len1; i++)
		c[i] = b[i - len1];
	return c;

}