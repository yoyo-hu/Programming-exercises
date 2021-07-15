#include "getStepNum.h"
long long getStepNum(int n) {
	int i;
	long long a=0;
	for (i = 0; i <n; i++) {
		a = 2 * a + 3;
    if (a >= 10007)
		a = a%10007;
    }
	return a;
}
