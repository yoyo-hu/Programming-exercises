#include <stdio.h>
typedef struct node1 {
	int val, i;
}node1;
node1 maxqueue[1000000], minqueue[1000000], curr;
int cup[1000000], max[1000000], min[1000000];
typedef struct node2 {
	double water;
	int index;
}node2;
struct node2 cups[1000000], cur;
int top;
int main()
{
	int n, k, i, j;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
		scanf("%d", &cup[i]);
	int head1 = 0, head2 = 0, tail1 = 0, tail2 = 0;
	maxqueue[0].val = cup[0];
	minqueue[0].val = cup[0];

	for (i = 1; i < n; i++)
	{
		curr.i = i;
		curr.val = cup[i];
		if (maxqueue[head1].i <= i - k) head1++;
		if (minqueue[head2].i <= i - k) head2++;

		while (maxqueue[tail1].val <= cup[i] && tail1 >= head1)
			tail1--;
		while (minqueue[tail2].val >= cup[i] && tail2 >= head2)
			tail2--;
		maxqueue[++tail1] = curr;
		minqueue[++tail2] = curr;

		max[i] = maxqueue[head1].val;
		min[i] = minqueue[head2].val;
	}

	for (i = k - 1; i < n; i++)
		printf("%d ", max[i]);
	printf("\n");
	for (i = k - 1; i < n; i++)
		printf("%d ", min[i]);
	printf("\n");
	cups[0].index = 1; cups[0].water = (double)cup[0];
	for (i = 1; i < n; i++)
	{
		cur.index = 1;
		cur.water = (double)cup[i];
		cups[++top] = cur;
		while (top)
		{
			if (cups[top].water / cups[top].index <= cups[top - 1].water / cups[top - 1].index)
			{
				cups[top - 1].water += cups[top].water;
				cups[top - 1].index += cups[top].index;
				top--;
			}
			else break;
		}
	}
	for (i = 0; i <= top; i++)
	{
		for (j = 0; j < cups[i].index; j++)
		{
			printf("%.2lf ", cups[i].water / cups[i].index);
		}
	}

	return 0;
}