#include <stdio.h>
_Bool ifOqupy[25] = { 0 };
_Bool ifStore[25] = { 0 };
int result = 0;
void seach(int* a, int len, int* store, int got_len) {
	while (got_len < 2 * len && store[got_len] != 0) {
		got_len++;
	}
	if (got_len >= 2 * len) {
		result++;
		return;
	}
	for (int i = 0; i < len; i++) {
		if (ifOqupy[i] == 0 && got_len + a[i] + 1 < 2 * len&& store[got_len + a[i] + 1] == 0) {
			store[got_len] = a[i];
			store[got_len + a[i] + 1] = a[i];
			ifOqupy[i] = 1;
			seach(a, len, store, got_len + 1);
			ifOqupy[i] = 0;
			store[got_len] = 0;
			store[got_len + a[i] + 1] = 0;
		}
	}
}
int main() {
	int n;
	int subject[25];
	int x;
	int index = 0;
	int s[100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < 2*n; i++) {
		scanf("%d", &x);
		if (ifStore[x] == 0) {
			subject[index++] = x;
			ifStore[x] = 1;
		}
	}
	seach(subject, n, s, 0);
	printf("%d", result);
	return 0;
}