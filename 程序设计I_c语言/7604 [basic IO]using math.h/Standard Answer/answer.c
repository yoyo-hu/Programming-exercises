#include "stdio.h"
#include<math.h>
int main()
{
	double n;
	scanf("%lf", &n);
	printf("%.3lf %.3lf %.3lf", sin(n), cos(n), fabs(n));
	return 0;
}