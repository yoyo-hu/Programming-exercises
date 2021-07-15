#include <stdio.h>
#include <string.h>
int main() {
	char ca[105];
	char cb[105];
	int ina[105];
	int inb[105];
	int result[250] = { 0 };
	int mark_a = 0, mark_b = 0;
	int mark_result = 0;
	scanf("%s", ca);
	scanf("%s", cb);
	for (int i = strlen(ca) - 1; i >= 0; i--)
		ina[mark_a++] = ca[i]-'0';
	for (int i = strlen(cb) - 1; i >= 0; i--)
		inb[mark_b++] = cb[i]-'0';
	for (int i = 0; i < mark_a; i++) {
		for (int j = 0; j < mark_b; j++) {
			result[i + j] += ina[i] * inb[j];
			int temp = i + j;
			while (result[temp] > 9) {
				result[temp + 1] += result[temp] / 10;
				result[temp] = result[temp] % 10;
				temp++;
			}
		}

	}
	mark_result = mark_a + mark_b+2;
	while (result[mark_result] == 0)
		mark_result--;
	for (int i = mark_result; i >= 0; i--)
		printf("%d", result[i]);
	return 0;
}