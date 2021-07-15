#include<stdio.h>
int zs(int a){
	int i;
	for(i=2;i*i<=a;i++){
		if(a%i==0)return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(n%i==0&&zs(i)==1){
			printf("%d ",i);
			n=n/i;
			i--;
		}
	}
	return 0;
}