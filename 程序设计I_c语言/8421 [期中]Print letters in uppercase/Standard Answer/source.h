#include <stdio.h>

void print_letters_in_uppercase() {
	while (1) {
		int c = getchar();
		if (c == -1) break;
		if (c >= 'A' && c <= 'Z') putchar(c);
		if (c >= 'a' && c <= 'z') putchar(c - 'a' + 'A');
	}
}

int main() {
	print_letters_in_uppercase();
}