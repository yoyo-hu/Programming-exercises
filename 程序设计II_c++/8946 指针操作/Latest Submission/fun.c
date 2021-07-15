void swap(int* p, int* q){
     int mid;
     mid=*p;
     *p=*q;
     *q = mid;
}
void print_array(int* p, int size){
     for (int i = 0; i < size;i++){
          printf("%d\n", p[i]);
     }
}
void print_matrix(int** mat, int row, int col){
     for (int i = 0; i <row;i++){
          for (int j = 0; j < col-1;j++){
               printf("%d ", mat[i][j]);
          }
          printf("%d\n", mat[i][col-1]);
     }
}