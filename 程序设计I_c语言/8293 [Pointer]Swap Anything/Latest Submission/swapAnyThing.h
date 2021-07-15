
void swapAnyThing(void *a, void *b, size_t val_size){
    void *c=malloc(val_size);
    memcpy(c,a,val_size);
    memcpy(a,b,val_size);
    memcpy(b,c,val_size);
    free(c);

}