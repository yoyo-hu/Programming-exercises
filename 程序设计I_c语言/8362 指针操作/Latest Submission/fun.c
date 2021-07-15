void swap(int* p, int* q){
    int mi;
    mi=*p;
    *p=*q;
    *q=mi;
}
void print_array(int* p, int size){
    for(int i=0;i<size;i++)
        printf("%d\n",p[i]);
}
void print_matrix(int** mat, int row, int col){
    int i=0,j=0;
    for(i=0;i<row;i++){
        for(j=0;j<col-1;j++)
            printf("%d ",mat[i][j]);
    if(i!=row-1)
        printf("%d\n",mat[i][j]);
    else
        printf("%d",mat[i][j]);
    }
}
