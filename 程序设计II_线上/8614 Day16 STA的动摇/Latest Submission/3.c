#include <stdio.h>
#include <string.h>
int INIT(char* before, char* after);
int main() {
	char s[1005];
	char AfterChange[2010];
	int len[2010];
	int result=0;
	scanf("%s", s);
	int len_a = INIT(s, AfterChange);
	int max_rear = 1, max_mid = 1;
	len[1] = 0;
	for (int i = 1; i < len_a; i++) {
		if (i < max_rear)
			len[i] = len[2 * max_mid - i] < max_rear - i ? len[2 * max_mid - i] : max_rear - i;
		else
			len[i] = 0;
		while (i - len[i]>0&& AfterChange[i - len[i]] == AfterChange[i + len[i]]) {
			len[i]++;
		}
		if (len[i] > len[result])
			result = i;
		if (i + len[i] > max_rear) {
			max_rear = i + len[i];
			max_mid = i;
		}
	}
	for (int i = result - len[result] + 1; i < result + len[result]; i++)
		if (AfterChange[i] != '#')
			printf("%c", AfterChange[i]);
	return 0;
}
int INIT(char* before, char* after) {
	int len = strlen(before);
	after[0] = '@';
	for (int i = 0; i < len; i++) {
		after[2 * i + 1] = '#';
		after[2 * i+2] = before[i];
	}
	after[2 * len + 1] = '#';
	after[2 * len + 2] = '$';
	after[2 * len + 3] = '\0';
	return 2 * len + 1;
}
