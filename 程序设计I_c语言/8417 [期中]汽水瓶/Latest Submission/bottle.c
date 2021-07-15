#include<stdio.h>
int main(){
	while(1){
		int a;
		scanf("%d",&a);
		if(a==0)break;
		int cnt=0,t=a;
		if(t==2)printf("1\n");
		else {
		while(t/3){
			cnt+=t/3;
			t=t/3+t%3;
			if(t==2)cnt++;
		} 
		
		printf("%d\n",cnt); 
	}
	}
	return 0;
}