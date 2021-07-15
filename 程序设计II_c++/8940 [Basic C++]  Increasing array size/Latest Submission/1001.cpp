int * doubleCapacity(int *list, int size){
     int *s = new int[size * 2];
     for (int i = 0; i < size*2;i++){
          if(i<size)
               s[i] = list[i];
          else
               s[i] = 0;
     }
     return s;
}