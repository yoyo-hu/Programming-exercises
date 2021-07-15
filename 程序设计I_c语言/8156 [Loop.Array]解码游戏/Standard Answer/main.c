#include <stdio.h>
#include <string.h>

struct Dir {
 int x;
 int y;
};

int main() {
 char input[51][51];
 int visit[51][51] = {0};
 int m, n;
 scanf("%d%d", &m, &n);
 for (int i = 0; i < m; ++i) {
  scanf("%s", input[i]);
 }

 int numOfWord;
 char word[10][50];
 scanf("%d", &numOfWord);
 for (int i = 0; i < numOfWord; ++i) {
  scanf("%s", word[i]);
 }

 struct Dir d[4] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
 int num = m * n, index = 0;
 int x = 0, y = 0;
 char s[5000] = {0};
 s[index++] = input[x][y];
 visit[x][y] = 1;
 while (index < num) {
  for (int i = 0; i < 4; ++i) {
   while (index < num) {   
    int tx = x + d[i].x;
    int ty = y + d[i].y;
    if (tx >= 0 && tx < m && ty >= 0 && ty < n && !visit[tx][ty]) {
     s[index++] = input[tx][ty];
     visit[tx][ty] = 1;
     x = tx;
     y = ty;
    } else {
     break;
    }
   }
  }
 }
 s[index] = '\0';
 printf("%s\n", s);
 
 for (int i = 0; i < strlen(s); ++i) {
  printf("%c", s[i]);
  for (int j = 0; j < numOfWord; ++j) {
   if (strncmp(s+i, word[j], strlen(word[j])) == 0) {
    for (int k = 1; k < strlen(word[j]); ++k) {
     printf("*");
    }
    i += strlen(word[j])-1;
    break;
   }
  }
 }
 printf("\n");
 return 0;
}