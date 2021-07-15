#include <stdio.h>
int head[1005];
struct node {
	int next;
	int to;
}edge[1000005];
int index_edge = 1;
int result = 20000;
void INIT() {
	for (int i = 0; i < 1005; i++) {
		head[i] = -1;
	}
}
void creatRelation(int from, int to) {
	edge[index_edge].to = to;
	edge[index_edge].next = head[from];
	head[from] = index_edge;
	index_edge++;
	edge[index_edge].to = from;
	edge[index_edge].next = head[to];
	head[to] = index_edge;
	index_edge++;
}
_Bool used[1005] = { 0 };
void findMin(int x,int road,int aim) {
	if (x==aim) {
		if (road < result)
			result = road;
		return;
	}
    if (road >= result)
		return;
	for (int i = head[x]; edge[i].next != -1; i = edge[i].next) {
		if (used[edge[i].to] == 0) {
			used[edge[i].to] = 1;
			findMin(edge[i].to, road + 1,aim);
			used[edge[i].to] = 0;
		}
	}
}
int main() {
	int n;
	int num;
	int rab;
	scanf("%d", &n);
	INIT();
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &rab);
			creatRelation( i, rab);
		}
	}
	used[1] = 1;
	findMin(1,0,n);
	if (result == 20000)
		printf("QAQ");
	else
		printf("%d\n", result);
	return 0;

}