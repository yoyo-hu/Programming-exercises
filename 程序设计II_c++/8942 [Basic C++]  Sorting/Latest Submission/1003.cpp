#include <stdlib.h>
int cmp(const void*a,const void*b){
     return *(int *)a - *(int *)b;
}
int *sort(const int * const array, int size){
     int *result = new int[size];
     //cope
     for (int i = 0; i < size;i++){
          result[i] = array[i];
     }
     qsort(result, size, sizeof(int), cmp);
     return result;
}