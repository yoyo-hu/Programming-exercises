#include <stdio.h>
#include <string.h>
int main() {
	char s[10005];
	int appearTime[26] = { 0 };
	int max_appearTime = 0;
	scanf("%s", s);
	int len_s = strlen(s);
	int lastAppear = 0;
	for (int i = 0; i < len_s; i++) {
		appearTime[s[i] - 'a']++;
		if (appearTime[s[i] - 'a'] > max_appearTime) {
			max_appearTime = appearTime[s[i] - 'a'];
			lastAppear = i;
		}
	}
	for (int i = lastAppear; appearTime[s[i] - 'a'] == max_appearTime; i++) {
		printf("%c", s[i]);
	}
	return 0;
}
