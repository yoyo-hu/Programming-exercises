#include <stdio.h>
int main(){
	int i,x;
	int max=0;
	
	scanf("%d",&i);
	for(;i>0;i--){
		scanf("%d",&x);
		if(x>max)
		max=x;
	}
	printf("%d",max);
	return 0;
}