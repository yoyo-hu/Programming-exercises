#include <stdio.h>
int main(){
	int i;//输入的数
	int pn=0,nn=0,tt=0; 
	double aver=0;
	int k=0;//ji计数
	 
	scanf("%d",&i);
	while(i!=0){
		k++;
		if(i>0)
		pn++;
		if(i<0)
		nn++;
		tt+=i;
		scanf("%d",&i);
	}
	if(k)
	aver=tt*1.0/k;
	printf("%d %d %d %.2f",pn,nn,tt,aver);
	return 0;
}