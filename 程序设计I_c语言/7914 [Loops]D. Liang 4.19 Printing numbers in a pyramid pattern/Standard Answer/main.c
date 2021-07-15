#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j > i; --j) {
            printf("     ");
        }
        int num = 1;
        for (int j = 0; j < i; ++j) {
            printf("%5d", num);
            num *= 2;
        }
        printf("%5d", num);
        for (int j = 0; j < i; ++j) {
            num /= 2;
            printf("%5d", num);
        }
        printf("\n");
    }
    return 0;
}