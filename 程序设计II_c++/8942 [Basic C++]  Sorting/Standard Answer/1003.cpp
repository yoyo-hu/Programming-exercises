// Problem#: 17758
// Submission#: 4643997
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
int *sort(const int * const array, int size) {
 int *a;
 a = new int [size];
 int i, j, temp;
 for(i = 0; i < size; i++) {
  a[i] = array[i];
 }
 for(i = 0; i < size; i++) {
  for(j = 0; j < size - 1; j++) {
   if(a[j] > a[j+1]) {
    temp = a[j+1];
    a[j+1] = a[j];
    a[j] = temp;
   }
  }
 }
 return a;
}
