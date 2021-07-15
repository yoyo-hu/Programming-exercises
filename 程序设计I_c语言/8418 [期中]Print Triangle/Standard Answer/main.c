#include <stdio.h>

int main()
{
    int h;
    scanf("%d", &h);
    int mid = h - 1;
    for (int i = 0; i < h; i++)
    {
        int first = mid - i;
        int second = mid + i;
        int max = second;
        if (i == h - 1) {
            for (int j = 0; j <= second; j++) {
                if (j >= first && j <= second) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        } else {
            for (int j = 0; j <= second; j++) {
                if (j == first || j == second) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}