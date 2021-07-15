#include <stdio.h>
struct stack{
	char string[50];
	int top;
}Mystack;
struct stack push(struct stack Astack, char a) {
	Astack.top++;
	Astack.string[Astack.top] = a;
	return Astack;
}
int isMatch(struct stack Astack, char a) {
	if (a == ')') {
		if (Astack.string[Astack.top] == '(')
			return 1;
		else return 0;
	}
	else if (a == '}') {
		if (Astack.string[Astack.top] == '{')
			return 1;
		else return 0;
	}
	else  {
		if (Astack.string[Astack.top] == '[')
			return 1;
		else return 0;
	}
}
int main() {
	Mystack.top = -1;
	char x;
	while ((x = getchar()) != EOF) {
		if (x == '('|| x == '{'|| x == '[')
			Mystack=push(Mystack, x);
		else if (x == ')'|| x == '}'|| x == ']') {
			if (!isMatch(Mystack, x)) {
				printf("No");
				return 0;
			}
			else Mystack.top--;
		}
	}
	if (Mystack.top == -1)
		printf("Yes");
	else printf("No");
	return 0;
}