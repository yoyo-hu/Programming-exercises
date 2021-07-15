#include <stdio.h>
#include <string.h>

int main() {
	char a[100], b[100];
	scanf("%s%s", a, b);
	int len_a = strlen(a), len_b = strlen(b);
	
	if (len_a != len_b) {
		printf("No\n");
		return 0;
	}

	int count[26] = {0};
	for (int i = 0; i < strlen(a); ++i) {
		count[a[i]-'a']++;
	}
	for (int i = 0; i < strlen(b); ++i) {
		count[b[i]-'a']--;
	}	
	int flag = 1;
	for (int i = 0; i < 26; ++i) {
		if (count[i] != 0) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		printf("Yes\n");
	} else {
		printf("No\n");
	}
	return 0;
}