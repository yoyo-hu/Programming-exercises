char* my_memmove(char *dst, const char *src, unsigned int n){
  char temp[32] = {};
  for (unsigned int i = 0; i < n;i++){
    temp[i] = src[i];
    }
  for (unsigned int i = 0; i < n;i++){
    dst[i] = temp[i];
  }
  return dst;
}