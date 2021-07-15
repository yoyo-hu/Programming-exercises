void swap(char & a,char & b){
     int mid;
     mid=a;
     a = b;
     b = mid;
}
void reverse(char*a,int size){
     for (int i = 0; i < size/2;i++){
          swap(a[i], a[size-1- i]);
     }
}
char * convertDecimalToHex(int value){
     char *s = new char[16];
     int mark = 0;
     while(value){
          if(value%16<10)
               s[mark++]=value%16+'0';
          else
               s[mark++]=value%16-10+'A';
          value /= 16;
     }
     reverse(s, mark);
     s[mark] = '\0';
     return s;
}

void convertDecimalToHex(int value, char *s){
     int mark = 0;
     while(value){
          if(value%16<10)
               s[mark++]=value%16+'0';
          else
               s[mark++]=value%16-10+'A';
          value /= 16;
     }
     reverse(s, mark);
     s[mark] = '\0';
}