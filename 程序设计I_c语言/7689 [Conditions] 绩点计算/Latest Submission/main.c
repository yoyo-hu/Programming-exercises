#include <stdio.h>
int main(){
	int c;
	scanf("%d",&c);
	if(c<0||c>100){
		printf("Invalid");
	}
	else{
		if(c<=59)
		printf("Failed");
		else
		printf("%.1f",(c-50)*1.0/10);
	}
	return 0;
}