#include <stdio.h>
#include <math.h>
int f(int n){
	int result=1;
	for(int i=n;i>1;i--){
	result*=i;
	}
	return result;
}
int main(){
	int n;
	int N;
	printf("find the least number N such that g(n)>=f(n) when n>N.\n");
	printf("(1) n=1, f(n)=n and g(n)=nln(n).\n");
	n=1;
	N=n;
	while(N*log(N)<N){
		N++;
	}
	printf("N=%d\n",N);
	printf("(2) n=1, f(n)=n^10 and g(n)=2^n. \n");
	n=1;
	N=15;//N=15在2^n于N^10的唯一交点之后；
	while(pow(2,N)<pow(N,10)){
		N++;
	}
	printf("N=%d\n",N);
	printf("(3) n=2, f(n)=2^n and g(n)=n!.\n");
	n=2;
	N=n;
	while(f(N)<pow(2,n)){
		N++;
	}
	printf("N=%d\n",N);
	//计算出N后分别对（g(n)-f(n)）求导数进行根分析，发现当n>N时，g(n)和f(n)不在有交点，故可以确定g(n)>=f(n) when n>N.
	return 0;
}