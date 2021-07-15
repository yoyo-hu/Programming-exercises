#include <stdio.h>
#include <string.h>
int main() {
	char a[105], b[105];
	int c[105] = { 0 };
	scanf("%s", a);
	scanf("%s", b);
	int t =0;//计数变量
	int i = strlen(a)-1;
	int j = strlen(b)-1;

	while(i>=0||j>=0){
		if(i >= 0 && j >= 0)
			c[t] += ((int)a[i--]-48 + (int)b[j--]-48);
		else if (j < 0) 
			c[t] += (int)a[i--] - 48;
		else if (i < 0)
			c[t] += (int)b[j--] - 48;
		if (c[t] >= 10){
			c[t+1] = c[t] / 10;
			c[t] = c[t] % 10;
		}
		t++;
	}
	if (c[t] != 0)
		printf("%d", c[t]);
	for (int k = t-1;k>=0; k--)
		printf("%d", c[k]);
	return 0;
}
