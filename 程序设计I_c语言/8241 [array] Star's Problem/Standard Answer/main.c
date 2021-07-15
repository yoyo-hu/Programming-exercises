#include <stdio.h>

long long nums[100000];

int main() {
    int m = 0, n = 0, i = 0, j = 0;
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) {
        scanf("%lld", &nums[i]);
        if (i > 0) nums[i] += nums[i-1];
    }

    long long temp = 0, tempAdd = 0, sum = 0;
    int ope = 0, isneg = 1, a = 0, b = 0;
    for (i = 0; i < m; i++) {
        
        scanf("%d", &ope);
        switch (ope) {
        case 1:
            isneg = -isneg;
            temp = -temp;
            break;
        case 2:
            scanf("%lld", &tempAdd);
            temp += tempAdd;
            break;
        case 3:
            scanf("%d%d", &a, &b);
            if (a > 1)
                sum = (nums[b-1] - nums[a-2]) * isneg + (b-a+1) * temp;
            else
                sum = nums[b-1] * isneg + b * temp;
            printf("%lld\n", sum);
            sum = 0;
        }
    }
    return 0;
}