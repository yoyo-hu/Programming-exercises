#include<stdio.h>
int main() {
    int n, l, x, sum = 0, i;
    char s[11];
    scanf("%d%d", &n, &l);
    for (i = 1; i <= n; i++) {
        scanf("%s%d", s, &x);
        if (s[0] == 'R') x = l - x;
        if (x > sum) sum = x;
    }
    printf("%d\n", sum);
    return 0;
}
