int myStrlen(char a[]) {
  int i = 0;
  while(a[i]!='\0'){
    i++;
  }
  return i;
}

int myStrcmp(char a[], char b[]) {
  int lena = myStrlen(a);
  int lenb = myStrlen(b);
  if(a>b)
    return 1;
    else if(b>a)
      return -1;
    int suma = 0;
    int sumb = 0;
    for (int i = 0; i < lena;i++){
      suma += a[i] - 'a';
      sumb += b[i] - 'a';
    }
    if(suma>sumb)
    return 1;
    else if(sumb>suma)
      return -1;
      else
        return 0;
}

void myStrcpy(char des[], char src[]) {
  int len = myStrlen(src);
  for (int i = 0; i < len;i++){
    des[i] = src[i];
  }
  des[len] = '\0';
}