#include <stdio.h>
#include <string.h>
void print_result(int a);
int main() {
	int x;
	scanf("%d", &x);
	print_result(x);
	return 0;
}
void print_result(int a) {
	int binary[32] = { 0 };
	int mark_binary = 0;
	while (a) {
		binary[mark_binary++] = a % 2;
		a /= 2;
	}
	for (int i = mark_binary - 1; i >= 0; i--) {
		if (binary[i] == 1) {
			if (i != mark_binary - 1)
				printf("+");
			if (i == 0)
				printf("2(0)");
			else if (i == 1)
				printf("2");
			else if(i==2)
				printf("2(2)");
			else {
				printf("2(");
				print_result(i);
				printf(")");
			}
		}
	}

}