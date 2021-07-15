#include<string.h>
#include<stdio.h>
int main() {
	char in[302] = { 0 };
	char out[50][50] = { {0} };
	int q = 0, w = 0;
	for (int i = 0;; i++) {
		in[i] = getchar();
		if (in[i] == '\n' || in[i] == EOF)break;
	}
	for (int i = 0; in[i] != 0; i++) {
		if (in[i] != ' ' && in[i] != '\n'&& in[i] != EOF) {
			while (in[i] != ' ' && in[i] != '\n'&& in[i] != EOF) {
				out[q][w++] = in[i];
				i++;
			}
			out[q][w] = '\0';
			q++;
			w = 0;
		}
	}
	for (int i = q - 1; i >= 0; i--) {
		if (i != 0)printf("%s ", out[i]);
		else printf("%s", out[i]);
	}
	return 0;
}