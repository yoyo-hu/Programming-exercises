#include <stdio.h>
int price(int x);
int main(){
	int num1,num2;
	int sum;
	
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	if(sum%num2==0)
		printf("%d\n",sum);
	else
	printf("%d\n",num1);
	return 0;
}
