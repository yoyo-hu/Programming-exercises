#include <stdlib.h>
#include <stdio.h>
#include "cmpMatrices.h"
void inputMatrices(int *a,size_t s){
	size_t j,k;
		for(j=0;j<s;j++)
			for(k=0;k<s;k++)
				scanf("%d",(a+j*s+k));
}
void printMatrices(int *a,size_t s){
	int j,k;
		for(j=0;j<s;j++){
			for(k=0;k<s;k++){
				printf("%d ",*(a+j*s+k));
			}
			printf("\n");
		}
		printf("\n\n");
}
int cmpMatrices(const void *f, const void *s, void *sizePtr) {
  	size_t *matrixSizePtr = (size_t *)sizePtr;
  	size_t m = *matrixSizePtr;
  	size_t i,j;
  	int *a= *((int (*)[25])f); 
  	int *b= *((int (*)[25])s); 
	int p=0,q=0;
  	for(i=0;i<=m;i++){
  		for(j=0;j<=m;j++)
		  if(i==j||m-i-1==j){
		  	p+=*(a+i*m+j);
		  	q+=*(b+i*m+j);
		  }	
	}
	if(p>q) return 1;
	if(p<q) return -1;
	return 0;
}