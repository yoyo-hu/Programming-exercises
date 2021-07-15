#include <stdio.h>
int main (){
	int n;
	
	scanf("%d",&n);
	printf("Your amount %d consists of\n%d dollars\n%d quarters\n%d dimes\n%d nickels\n%d pennies",n,n/100,n%100/25,n%25/10,n%100%25%10/5,n%100%25%10%5);
}