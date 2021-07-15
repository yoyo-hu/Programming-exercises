#include <stdio.h>
int fun(int x, int n) {
    int a[100], b[100];
    int i, j, flag, k = 0;
    for (i = 0; ; i++) {
        a[i] = x % n;
        x /= n;
        if (x == 0)break;
        }
    j = k = i;
    for (i = 0; j >= 0; i++, j--)
        b[i] = a[j];
    b[k + 1] = '\0';
    flag = 1;
    for (i = 0; i <= (k / 2); i++) {
        if (b[i] != b[k - i]) {
                 flag = 0;
                 break;
                 }
        }
    if (flag)return 1;
    else return 0;
    }
int main() {
    int T, S, count;
    int i, j, flag = 0;
    scanf("%d", &T);
    while (T--) {
          scanf("%d", &S);
          for (S++, flag = 0; !flag; S++) {
              count = 0;
              for (i = 2; i <= 10; i++) {
                  if (fun(S, i))count++;
                  if (count >= 2) {
                        flag = 1;
                        break;
                        }
                  }
              if (flag)printf("%d\n", S);
              }
          }
    return 0;
    }