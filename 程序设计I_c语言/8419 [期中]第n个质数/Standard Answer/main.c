#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) { return 0; }

    int len = sqrt(num);
    for (int i = 2; i <= len; i++) {
        if (num % i == 0) { return 0; }
    }

    return 1;
}

int main()
{
    int n = 0;
    int check = 0;
    scanf("%d", &n);
    while(1){
        check++;
        if (isPrime(check) == 1){
            n--;
        }

        if (n == 0) {
            printf("%d", check);
            return 0;
        } 
    }
}
