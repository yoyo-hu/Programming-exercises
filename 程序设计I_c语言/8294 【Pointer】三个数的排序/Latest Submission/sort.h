void sort(int*a, int*b, int*c){
    int mi;
    if(*a>*b){
        mi=*a;
        *a=*b;
        *b=mi;
    }
    if(*b>*c){
        mi=*b;
        *b=*c;
        *c=mi;
    }
    if(*a>*b){
        mi=*a;
        *a=*b;
        *b=mi;
    }

}