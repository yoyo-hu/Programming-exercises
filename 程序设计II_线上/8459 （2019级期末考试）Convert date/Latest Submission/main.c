#include <stdio.h>
#include <string.h>
typedef struct stu {
	char name[16];
	int ye;
	int mo;
	int day;
}stu;
int main() {
	int month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int N;
	stu all[11];
	char sub[16];
	int i = 0;
	int result = 0;
	scanf("%d", &N);
	for (; i < N; i++) {
		scanf("%s", all[i].name);
		scanf("%d%d%d", &all[i].ye, &all[i].mo, &all[i].day);
	}
	scanf("%s", sub);
	for (i = 0; strcmp(all[i].name, sub) != 0; i++);
	result += all[i].day;
	for (int j = 1; j < all[i].mo; j++)
		result += month[j];
	if (all[i].ye % 4 == 0&&all[i].mo>2)
		result++;
	printf("%d", result);
	return 0;
}