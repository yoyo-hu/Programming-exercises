char* sortString(const char * const s){
    char *a=(char *)malloc(strlen(s)+1);
    int k=strlen(s);
    for(int i=0;i<=k;i++)
        a[i]=s[i];
    char mi;
    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++)
        if(a[j]>a[j+1])
        {
            mi=a[j];
            a[j]=a[j+1];
            a[j+1]=mi;

        }
    }
    return a;
}
