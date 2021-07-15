#include <stdio.h>
#include <string.h>
void operate(int* digit, char* oper, int* mark,int* otp);
void print(int a, int line);
int main() {
	char a[7][200];
	int x[2] = { 0 };
	int mark_x = 0;
	int cul = 0;
	int result[20] = { 0 };
	int mark_result=0;
	for (int i = 0; i < 7; i++)
		scanf("%s", a[i], 200);
	for (int i = 0; i < strlen(a[0]) - 4; i += 6) {
		if (a[0][i] == '.' && a[0][i + 1] == '.' && a[0][i + 2] == '.' && a[0][i + 3] == '.' && a[0][i + 4] == 'x')
			x[mark_x] = x[mark_x] * 10 + 1;
		else if (a[0][i] == '.' && a[0][i + 1] == '.' && a[0][i + 2] == '.' && a[0][i + 3] == '.' && a[0][i + 4] == '.') {
				mark_x++;
		}
		else if (a[0][i] == 'x' && a[0][i + 1] == '.' && a[0][i + 2] == '.' && a[0][i + 3] == '.' && a[0][i + 4] == 'x')
			x[mark_x] = x[mark_x] * 10 + 4;
		else if (a[1][i] == '.' && a[1][i + 1] == '.' && a[1][i + 2] == '.' && a[1][i + 3] == '.' && a[1][i + 4] == 'x') {
			if (a[3][i] == '.' && a[3][i + 1] == '.' && a[3][i + 2] == '.' && a[3][i + 3] == '.' && a[3][i + 4] == 'x')
				x[mark_x] = x[mark_x] * 10 + 7;
			else if (a[4][i] == '.' && a[4][i + 1] == '.' && a[4][i + 2] == '.' && a[4][i + 3] == '.' && a[4][i + 4] == 'x')
				x[mark_x] = x[mark_x] * 10 + 3;
			else
				x[mark_x] = x[mark_x] * 10 + 2;
		}
		else if (a[1][i] == 'x' && a[1][i + 1] == '.' && a[1][i + 2] == '.' && a[1][i + 3] == '.' && a[1][i + 4] == '.') {
			if (a[4][i] == '.' && a[4][i + 1] == '.' && a[4][i + 2] == '.' && a[4][i + 3] == '.' && a[4][i + 4] == 'x')
				x[mark_x] = x[mark_x] * 10 + 5;
			else
				x[mark_x] = x[mark_x] * 10 + 6;
		}
		else {
			if (a[3][i] == 'x' && a[3][i + 1] == '.' && a[3][i + 2] == '.' && a[3][i + 3] == '.' && a[3][i + 4] == 'x')
				x[mark_x] = x[mark_x] * 10 ;
			else if (a[4][i] == 'x' && a[4][i + 1] == '.' && a[4][i + 2] == '.' && a[4][i + 3] == '.' && a[4][i + 4] == 'x')
				x[mark_x] = x[mark_x] * 10 + 8;
			else
				x[mark_x] = x[mark_x] * 10 + 9;
		}
	}
	cul = x[0] + x[1];
	if(cul ==0)
		result[mark_result++] = 0;
	else {
		while (cul != 0) {
			result[mark_result++] = cul % 10;
			cul /= 10;
		}
	}
	for (int i = 0; i < 7; i++) {
		for (int j = mark_result-1; j >= 0; j--) {
			print(result[j],i);
			if (j != 0)
				printf(".");
			else printf("\n");
		}
	}
}
void operate(int* digit, char* oper, int* mark, int* otp) {
	if (oper[*otp] == '+')
		digit[*mark - 1] = digit[*mark] + digit[*mark - 1];
}
void print(int a, int line) {
	if (line == 0) {
		if (a == 1)
			printf("....x");
		else if (a == 4)
			printf("x...x");
		else
			printf("xxxxx");
	}
	else if (line == 1 || line == 2) {
		if (a == 1 || a == 2 || a == 3 || a == 7)
			printf("....x");
		else if (a == 4 || a == 8 || a == 9 || a == 0)
			printf("x...x");
		else
			printf("x....");
	}
	else if (line == 3) {
		if (a == 1||a==7)
			printf("....x");
		else if (a == 0)
			printf("x...x");
		else
			printf("xxxxx");
	}
	else if (line == 4 || line == 5) {
		if (a == 2 )
			printf("x....");
		else if (a == 6 || a == 8 ||a == 0)
			printf("x...x");
		else
			printf("....x");
	}
	else {
		if (a == 1||a==4||a==7)
			printf("....x");
		else
			printf("xxxxx");
	}
}