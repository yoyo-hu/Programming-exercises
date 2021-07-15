#include <stdio.h>
#include <string.h>

void insertion_sort(char *x[], int n) {
    int i, j;
    char *temp;
    for (i = 1; i < n; ++i) {
        temp = x[i];
        j = i;
        while (j > 0 && strcmp(temp, x[j - 1]) < 0) {
            x[j] = x[j - 1];
            --j;
        }
        x[j] = temp;
    }
}

int main(void) {
    char *strings[1000], s[1000][101];
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        scanf("%s", s[i]);
        strings[i] = s[i];
    }
    insertion_sort(strings, n);
    for (i = 0; i < n; ++i)
        puts(strings[i]);
    return 0;
}
