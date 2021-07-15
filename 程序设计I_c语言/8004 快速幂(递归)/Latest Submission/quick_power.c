int quick_power(int a, int b, int p){
    int sum=1;
    for(int i=b;i>0;i--){
        sum*=a;
    }
    return sum%p;
}
