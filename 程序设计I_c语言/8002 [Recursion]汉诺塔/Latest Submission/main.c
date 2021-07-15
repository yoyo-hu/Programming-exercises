#include <stdio.h>
int N;
void x(int a,int b,int c,int t);
int main(){
    scanf("%d",&N);
    x(1,2,3,N);
    return 0;
}
void x(int a, int b, int c, int t) {
	if (t == 1) {
		printf("%d%d\n", a, c);
	}
	else {
		x(a, c, b, t - 1);
		printf("%d%d\n",a,c);
		x(b, a, c, t - 1);
	}
}
