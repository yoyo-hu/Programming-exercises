#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    /*冒泡排序*/
    int n = 0, i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int m = 0, j = 0, num[10001] = {0};
        scanf("%d", &m);

        for (j = 0; j < m; j++) {
            scanf("%d", &num[j]);
        }

        int s = 0, t = 0;
        for (s = 1; s < m; s++) {
            if (num[s] < num[s-1])
                swap(&num[s], &num[s-1]);
        }

        for (s = 1; s < m - 1; s++) {
            if (num[s] < num[s-1])
                swap(&num[s], &num[s-1]);
        }

        printf("%d\n", num[m-2]);
    }

    return 0;
}