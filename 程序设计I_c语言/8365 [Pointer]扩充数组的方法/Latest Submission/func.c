int *doubleCapacity(int *list, int size, int addSize){
    int* c=(int*)malloc((size+addSize)*sizeof(int));
    for(int i=0;i<size;i++)
        c[i]=list[i];
    for(int i=size;i<size+addSize;i++)
        c[i]=0;
    return c;
}
