#include <stdio.h>
int main(){
  int row,col;
  char pattern[101][101];
  scanf("%d%d",&row,& col);
  for (int i = 0; i < row;i++){
      scanf("%s",pattern[i]) ;
  }
  for (int i = 0; i < row;i++){
    for (int j = col-1; j >=0;j--){
      if(pattern[i][j]=='d')printf("b");
      else if(pattern[i][j]=='b')printf("d");
      else printf("%c",pattern[i][j]) ;
    }
      printf("\n");
  }
    return 0;
}