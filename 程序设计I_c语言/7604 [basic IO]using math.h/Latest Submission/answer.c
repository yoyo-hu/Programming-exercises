#include <stdio.h>
#include <math.h>
int main()
{
	double n;
	scanf("%lf",&n);
	printf("%.3f %.3f %.3f",sin(n),cos(n),fabs(n));
	
	return 0;
}