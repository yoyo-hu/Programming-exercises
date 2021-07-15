#include "btd.h" 
#include <string.h>
long long BintoDec(char binary[]){
    long long t=0;
    int k=strlen(binary);
    for(int i=0;i<k;i++){
        t=(int)binary[i]-48+t*2;
    }
    return t;
}
