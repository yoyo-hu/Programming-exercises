#include<stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	int num = 0;
	int i = 0, j = 0;
	for(i = 0; i < count; i++) {
		scanf("%d", &num);
		int s[num];
		for (j = 0; j < num; j++) {
			s[j] = j+1;
		}
		int front = 0, rear = 0;
		int n = num;
		while(n--) {
			front %= num;
			printf("%d ", s[front++]); //��������������Ԫ�� 
			rear %= num;
			front %= num;
			s[rear] = s[front]; //������Ԫ���Ƶ���β 
			rear++;
			front++;
		}
		printf("\n");
	}
	return 0;
}
