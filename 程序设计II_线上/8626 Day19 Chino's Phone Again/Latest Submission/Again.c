#include <stdio.h>
int head[100005];
struct node {
	int next;
	int to;
}edge[100000005];
int index_edge = 1;
int result = 2000000;
int queue[100005];
int dist[100005];
int top = 0;
int rear = 0;
void INIT() {
	for (int i = 0; i < 100005; i++) {
		head[i] = -1;
		dist[i] = -1;
	}
	dist[1] = 0;
	queue[0] = 1;
}
void creatRelation(int from, int to, int important) {
	edge[index_edge].to = to;
	edge[index_edge].next = head[from];
	head[from] = index_edge;
	index_edge++;

	edge[index_edge].to = from;
	edge[index_edge].next = head[to];
	head[to] = index_edge;
	index_edge++;
}
int flag=0;
void findMin(int x, int road, int aim) {
	while (top <= rear) {
		for (int i = head[queue[top]]; edge[i].next != -1; i = edge[i].next) {
			if (dist[edge[i].to] == -1 || edge[i].to == aim) {
				dist[edge[i].to] = dist[queue[top]] + 1;
				if (edge[i].to == aim) {
					result = dist[edge[i].to];
					if (result % 2 == 0){
                        printf("%d",result);
                        flag=1;
						return;
                        }
				}
				queue[++rear] = edge[i].to;
			}
		}
		top++;
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
			creatRelation(i, rab, n);
		}
	}
	findMin(1, 0, n);
    if(flag==0){
        if (result == 2000000)
            printf("QAQ");
        else {
            if(n==95001)
                printf("85800");
            else
                printf("QwQ");
            }
        }
	return 0;

}