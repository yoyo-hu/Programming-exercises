#include <math.h>

int getRightNum(int num) {
    int hundreds, tens, units, sum;
    while (num >= 100) {
        hundreds = num / 100;
        tens = num % 100 / 10;
        units = num % 10;
        sum = pow(hundreds, 3) + pow(tens, 3) + pow(units, 3);
        if (sum == num) {
            return num;
        }
        num -= 1;
    }
    return -1;
}