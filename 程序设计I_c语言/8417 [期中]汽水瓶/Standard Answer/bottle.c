#include<stdio.h>

int main() {
    int n;
    while(scanf("%d", &n)) {
        if (n == 0) break;
        
        int change = 0;
        while (n > 1) {
            if (n == 2) {
                change++;
                break;
            }
            change += n / 3;
            n = n % 3 + n / 3;
        }
        printf("%d\n", change);
    }
    return 0;
}