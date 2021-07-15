#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void) {
    char s[150][150];
    int n, m;
    int i, j;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; ++i) {
        scanf("%s", s[i]);
        for (j = 0; j < m; ++j) {
            if (s[i][j] == 'b') {
                s[i][j] = 'd';
            } else if (s[i][j] == 'd') {
                s[i][j] = 'b';
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = m - 1; j >= 0; --j) {
            printf("%c", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}