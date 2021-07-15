#include <stdio.h>
#include <string.h>
char a[10001];
char b[10001];
int main()
{
	int N;
	int x, y;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int t = 0;
		char* p=NULL;
		scanf("%s", a);
		scanf("%s", b);
		x = strlen(a);
		y = strlen(b);
		int k = 0;
		if (strstr(a, b) != NULL) {
			p = strstr(a, b);
			t = y;
		}
		if (t == y) {
			k = 0;
			for (int j = y; j < x;) {
				if (p[j++] == b[k++])
					t++;
				else
					break;
				if (k == y)k = 0;
			}
			printf("%d\n", t);
		}
		else
			printf("0\n");
	}

	return 0;
}
