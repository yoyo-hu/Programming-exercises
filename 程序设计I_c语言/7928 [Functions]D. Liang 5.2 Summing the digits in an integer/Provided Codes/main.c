# include <stdio.h>
# include "sumDigits.h"

int main() {
    long num = 0;
    int case_num = 0;
    scanf("%d", &case_num);
    while (case_num--) {
        scanf("%ld", &num);
        printf("%d\n", sumDigits(num));
    }
}
