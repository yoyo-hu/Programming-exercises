# include "sumDigits.h"
int sumDigits(long n) {
	int sum=0;
	if (n < 0)
		n = 0 - n;
	while (n){
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}
