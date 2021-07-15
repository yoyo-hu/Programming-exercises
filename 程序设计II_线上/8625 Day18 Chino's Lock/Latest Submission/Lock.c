#include <stdio.h>
struct node
{
	int num[4];
	int step;
}first, last;
int vis[11][11][11][11] ;
struct node queue[1000000];
int top = 0;
int rear = 0;
void swap(int* a, int* b) {
	int mi;
	mi = *a;
	*a = *b; 
	*b = mi;
}
void INIT() {
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			for (int k = 0; k < 11; k++) {
				for (int d = 0; d < 11; d++) {
					vis[i][j][k][d] = 0;
				}
			}
		}
	}
}
void BFS()
{
	struct node t;
	t = first;
	queue[rear] = t;
	vis[t.num[0]][t.num[1]][t.num[2]][t.num[3]] = 1;
	while (rear>=top)
	{
		t = queue[top];
		top++;
		if (t.num[0] == last.num[0] && t.num[1] == last.num[1] && t.num[2] == last.num[2] && t.num[3] == last.num[3])
		{  
			printf("%d\n", t.step);
			return;
		}
		for (int i = 0; i < 4; i++)//+1 
		{
			struct node next = t;
			next.num[i]++;
			if (next.num[i] == 10) next.num[i] = 1;
			if (!vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]])
			{
				vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = 1;
				next.step++;
				queue[++rear] = next;
			}
		}
		for (int i = 0; i < 4; i++)//-1
		{
			struct node next = t;
			next.num[i]--;
			if (next.num[i] == 0) next.num[i] = 9;
			if (!vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]])
			{
				vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = 1;
				next.step++;
				queue[++rear] = next;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			struct node next = t;
			swap(&(next.num[i]), &(next.num[i + 1]));
			if (!vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]])
			{
				vis[next.num[0]][next.num[1]][next.num[2]][next.num[3]] = 1;
				next.step++;
				queue[++rear] = next;
			}
		}
	}
}

int main()
{
	int T;
	char str1[5];
	char str2[5];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		top = 0;
		rear = 0;
		INIT();
		scanf("%s", str1);
		scanf("%s", str2);
		for (int i = 0; i < 4; i++)
		{
			first.num[i] = str1[i] - '0';
			last.num[i] = str2[i] - '0';
		}
		BFS();
	}
	return 0;
}