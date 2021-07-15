#include <stdio.h>
struct result {
	char stack[35];
	int top;
}storage;
int main() {
	int t;
	int n;
	int temp;
	scanf("%d%d",&t,&n);
	for (int i = 0; i < t; i++) {
        if(i!=0)printf("\n");
		storage.top = -1;
		scanf("%d", &temp);
		while (temp != 0) {
			if(temp%n>=0&&temp%n<=9)
				storage.stack[++storage.top] = temp % n+'0';
			else
				storage.stack[++storage.top] = temp % n + 55;
			temp /= n;
		}
		for (int i = storage.top; i >= 0; i--)
			printf("%c", storage.stack[i]);
	}

	return 0;
}