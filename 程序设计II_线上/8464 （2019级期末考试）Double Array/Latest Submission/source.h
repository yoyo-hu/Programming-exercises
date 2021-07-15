
#include <stdlib.h>
double** make_list(double data[], int sizes[]) {
    int size = 0;
	int mark = 0;
	while (sizes[size])
		size++;
	double** result = (double**)malloc((size+1) * sizeof(double*));
    result[size]=NULL;
	for (int i = 0; i < size; i++) {
		result[i] = (double*)malloc(*(sizes+i) * sizeof(double));
		for (int j = 0; j < sizes[i]; j++){
			result[i][j] = *(data+mark);
			mark++;
		}
	}
	return result;
}
void free_lists(double* lists[]) {
    int i=0;
	while(lists[i]!=NULL){
		free(lists[i]);
        i++;
	}
	free(lists); 
}