#include <stdio.h>
int main(){
	int x;
	int a,b,c;
	
	scanf("%d",&x);
	a=x/100;
	b=x/10%10;
	c=x%10;
	printf("%d",a+b+c);
	
	return 0;
}