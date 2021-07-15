#include <stdio.h>

int main()
{
    int n = 0, re[8] = {0}, k = 0;
    unsigned char num = 0;
    scanf("%d", &n);
    num = (unsigned char) n;
    while (num > 0) {
        re[k++] = num % 2;
        num /= 2;
    }
    for (k = 7; k >= 0; k--) {
        printf("%d", re[k]);
    }
    printf("\n");
    return 0;
}