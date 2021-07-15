#include <stdio.h>
#include <string.h>
#include <ctype.h>
void operate(int* d, int* d_top, char* oper, int* oper_top);
void print(int a);
char s[10000005];
int digit[10000005] = { 0 };
char oper[10000005];
char operStack[10000005];
int main() {
	int digit_mark = 0;
	int oper_mark = 0;
	int top = -1;
	int priority[250];
	priority[(int)'&'] = 3, priority[(int)'^'] = 2 , priority[(int)'|'] = 1;
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		int temp = 0;
		int flag = 0;
		while ('0'<=s[i]&&s[i]<='9') {
			temp = temp * 2 + s[i]-'0';
			flag = 1;
			i++;
		}
		if (flag == 1)
			digit[digit_mark++] = temp;
		if (s[i] == '(' || s[i] == ')' || s[i] == '^' || s[i] == '&' || s[i] == '|') {
			if (top == -1|| s[i] == '(')
				operStack[++top] = s[i];
			else if (s[i] == ')') {
				while(top != -1 && operStack[top]!='(')
					operate(digit, &digit_mark, operStack,&top);
				top--;
			}
			else {
				while(top!=-1&&operStack[top] != '('&&priority[(int)operStack[top]]>= priority[(int)s[i]])
					operate(digit, &digit_mark, operStack, &top);
				operStack[++top] = s[i];
			}
			
		}
	}
	if (top == -1)
		print(digit[0]);
	else {
		while(top != -1) {
			operate(digit, &digit_mark, operStack, &top);
		}
		print(digit[0]);
	}
	return 0;
}
void operate(int* d, int* d_top, char* oper, int* oper_top) {
	if (oper[*oper_top] == '&')
		d[*d_top - 2] = d[(*d_top) - 2] & d[*d_top-1];
	else if (oper[*oper_top] == '^')
		d[*d_top - 2] = d[(*d_top) - 2] ^ d[*d_top-1];
	else if (oper[*oper_top] == '|')
		d[*d_top - 2] = d[(*d_top) - 2] | d[*d_top-1];
	(*d_top)--;
	(*oper_top)--;
}
void print(int a) {
	if (a == 0) {
		printf("0");
		return;
	}
	while (a != 0) {
		printf("%d", a % 2);
		a /= 2;
	}
}