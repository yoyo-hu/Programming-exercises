#include <stdio.h>
int main(){
	int i;
	int a,b,c;
	scanf("%d",&i);
	for(;i>0;i--){
		scanf("%d%d%d",&a,&b,&c);
	 	int m;
		if(a>b){
			m=a;
			a=b;
			b=m;
		}
		if(b>c){
			m=b;
			b=c;
			c=m;
		}
		if(a>b){
			m=a;
			a=b;
			b=m;
		}
	 printf("%d %d %d\n",a,b,c);
		}	
	return 0;
}


