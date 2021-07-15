#include <stdio.h>
int price(int x);
int main(){
	int i,y;
	int sum=0;
	
	scanf("%d",&i);
	while(i!=-1){
		y=price(i);
		sum+=y;
	scanf("%d",&i);
	}
	printf("%d",sum);
	return 0;
}
int price(int x){
	int y;
	switch(x){
		case 1:y=6;
			break;
		case 2:y=8;
			break;
		case 3:y=12;
			break;
		case 4:y=3;
			break;
		case 5:y=9;
			break;
	}
		return y;
}