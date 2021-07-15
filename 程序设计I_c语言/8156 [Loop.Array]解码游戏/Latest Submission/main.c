#include <stdio.h>
#include <string.h>
char a[55][55];
char b[2505];
int t = 0;
void ModifyString();
void circle(int x, int y, int h, int l);
 int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	for (int i = 0; i < m; i++) {
		scanf("%s", a[i]);
	}
	circle(0, 0, m, n);
	for (int i = 0; i < t; i++)
		printf("%c", b[i]);
	printf("\n");
	ModifyString();
	for (int i = 0; i < t; i++)
			printf("%c", b[i]);
	return 0;
}
 void circle(int x, int y, int h, int l) {
	 if (h == 1)
		 for (int i = y; i < y + l; i++)
			 b[t++] = a[x][i];
	 else if (l == 1)
		 for (int i = x; i < x + h; i++)
			 b[t++] = a[i][y];
	 else if (h == 2 && l == 2) {
		 b[t++] = a[x][y];
		 b[t++] = a[x + 1][y];
		 b[t++] = a[x + 1][y + 1];
		 b[t++] = a[x][y + 1];
	 }
	 else {
		 for (int i = x; i < x + h; i++)
			 b[t++] = a[i][y];
		 for (int i = y + 1; i < y + l; i++)
			 b[t++] = a[x + h - 1][i];
		 for (int i = x + h - 2; i >= x; i--)
			 b[t++] = a[i][y + l - 1];
		 for (int i = y + l - 2; i >= y + 1; i--)
			 b[t++] = a[x][i];
		 circle(x + 1, y + 1, h - 2, l - 2);

	 }
 }
	 void ModifyString(){
		 int chang[15];
		 int k;//the number of no
		 int max = 0;//find the longest str begins where str2 first appeared and ends with the str1 string to know the first sensitive words
		 int n_chang = 1;//remark the position of the first sensitive words
		 char no[15][55];
		 scanf("%d", &k);
		 for (int i = 0; i < k; i++)
			 scanf("%s", no[i]);
		 while (1) {
			 max = 0;
			 for (int i = 0; i < k; i++) {
				 if (strstr(b,no[i]) == NULL)
					 chang[i] = 0;
				 else
					 chang[i] = strlen(strstr(b,no[i]));
				 if (chang[i] > max) {
					 n_chang = i;
					 max = chang[i];
				 }
			 }
			 if (max != 0) {
				 for (int j = 0; j < strlen(b); j++) {
					 int d = 0;
					 while (b[j++] == no[n_chang][d++]);
					 if (d == strlen(no[n_chang])+1) {
						 for (int i = j-2; i > j - d; i--)
							 b[i] = '*';
						 break;
					 }
					 if (d > 0)
						 j--;
				 }
			 }
			 else 
				 break;
		 }
	 }