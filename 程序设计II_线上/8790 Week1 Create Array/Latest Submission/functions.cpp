int* Array(int m){
	int *p = new int[m];
	return p;
}							
int** Reshape(int*a, int row, int col){
	int **p = new int *[row];
	for (int i = 0; i < row;i++){
		p[i] = new int[col];
		for (int j = 0; j < col;j++){
			p[i][j] = a[i * col + j];
		}
	}
	return p;
}	
void FreeArray(int*a){
	delete []a;
}
void FreeMatrix(int**a, int row){
	for (int i = 0; i < row;i++){
		delete[] a[i];
	}
	delete[] a;
}