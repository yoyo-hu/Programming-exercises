#include<stdio.h>
int main(){
	int n,a[9]={0},q=1;
	scanf("%d",&n);
		if(n<0){
			n=128+n;
			a[8]=1;
		}
		if(n>0){
			while(n){
			a[q++]=n%2;
			n/=2;	
			}
		}
		for(int i=8;i>=1;i--)printf("%d",a[i]);
	
}