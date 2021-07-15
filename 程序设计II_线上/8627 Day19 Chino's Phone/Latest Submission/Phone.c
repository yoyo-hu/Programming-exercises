#include <stdio.h>
int head[100005];
struct node {
	int next;
	int val;
	int to;
}edge[100000005];
int rab[100005];
int valu[100005];
int index_edge = 1;
int result = 2000000;
int queue[100005];
int dist[100005];
int top = 0;
int rear = 0;
_Bool ifInQueue[100005] = { 0 };
void INIT() {
	for (int i = 0; i < 100005; i++) {
		head[i] = -1;
		dist[i] = 2000000;
	}
	dist[1] = 0;
	queue[0] = 1;
	ifInQueue[1] = 1;
}
void creatRelation(int from, int to, int important, int val) {
	edge[index_edge].to = to;
	edge[index_edge].next = head[from];
	edge[index_edge].val = val;
	head[from] = index_edge;
	index_edge++;

	edge[index_edge].to = from;
	edge[index_edge].next = head[to];
	edge[index_edge].val = val;
	head[to] = index_edge;
	index_edge++;
}
void findMin(int x, int road, int aim) {
	while (top <= rear) {
		for (int i = head[queue[top]]; edge[i].next != -1; i = edge[i].next) {
			if (dist[queue[top]] + edge[i].val < dist[edge[i].to]) {
				if (ifInQueue[edge[i].to] == 0) {
					queue[++rear] = edge[i].to;
					ifInQueue[edge[i].to] = 1;
				}
				dist[edge[i].to] = dist[queue[top]] + edge[i].val;
				if (edge[i].to == aim && dist[edge[i].to] < result) {
					result = dist[edge[i].to];
				}
			}
		}
		ifInQueue[top] = 0;
		top++;
	}
}
int main() {
	int n;
	int num;
	scanf("%d", &n);
	INIT();
	for (int i = 1; i <= n; i++) {
		scanf("%d", &num);
		for (int j = 0; j < num; j++) {
			scanf("%d", &rab[j]);
		}
		for (int j = 0; j < num; j++) {
			scanf("%d", &valu[j]);
			creatRelation(i, rab[j], n, valu[j]);
		}
	}
	findMin(1, 0, n);
	if (result == 2000000)
		printf("QAQ");
	else
		printf("%d\n", result);
	return 0;

}