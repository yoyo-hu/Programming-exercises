#include <stdio.h>

void putnchar(char c, int n) {
	for (int i = 0; i < n; ++ i)
		putchar(c);
}

void draw(int size) {
	int half = size / 2;
	// 画第0～n/2-1行
	for (int i = 0; i < half; ++ i) {
		putnchar(' ', i);
		putchar('1');
		putnchar(' ', half - 1 - i);
		putchar('2');
		putnchar(' ', half - 1 - i);
		putchar('3');
		putnchar(' ', i);
		putchar('\n');
	}
	// 画第n/2行
	putnchar('8', half);
	putchar('9');
	putnchar('4', half);
	putchar('\n');
	// 画第n/2+1～n-1行
	for (int i = 0; i < half; ++ i) {
		putnchar(' ', half - 1 - i);
		putchar('7');
		putnchar(' ', i);
		putchar('6');
		putnchar(' ', i);
		putchar('5');
		putnchar(' ', half - 1 - i);
		putchar('\n');
	}
}

int main() {
	int size;
	scanf("%d", &size);
	draw(size);
}