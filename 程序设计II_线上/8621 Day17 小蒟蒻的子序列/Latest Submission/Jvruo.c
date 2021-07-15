#include<stdio.h>
#include<string.h>
int gmax(int a, int b) { 
	if (b > a)return b;
	else return a;
}
int n;
char s[10010];
char a[10010];
int ans;
int len;
int check()
{
	int pos = 0;
	int now = 0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i] == a[pos])
		{
			++now;
			pos = pos + 1;
			if (pos == len)pos = 0;
		}
	}
	int LEN = now / len * len;
	return LEN * LEN / len;
}
int main()
{
	scanf("%d", &n);
	scanf("%s", s);
		ans = 0;
		for (len = 1; ; ++len)
		{
			int bst = n * n / len;
			if (bst <= ans)break;

			int top = 1;
			for (int i = 0; i < len; ++i)
			{
				a[i] = 'a';
				top *= 3;
			}
			for (int tim = 1; tim <= top; ++tim)
			{
				ans=gmax(ans, check());
				++a[len - 1];
				int pos = len - 1;
				while (a[pos] == 'd')
				{
					a[pos] = 'a';
					++a[--pos];
				}
			}
		}
		printf("%d\n", ans);
	return 0;
}