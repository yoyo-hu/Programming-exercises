#include <stdio.h>
#include <string.h>
void change(int a);
int main() {
	char temp[11];
	char sub[11];
	scanf("%s",temp);
	int mark = 1;
	for (int i = strlen(temp) - 1; i >=0; i--)
		sub[mark++] = temp[i];
	printf("人民币");
	for (int i = mark - 1; i >= 1; i--) {
		if (i == 10) {
			if (sub[i] != '1')
				change(sub[i] - '0');
			printf("拾");
		}
		else if (i == 9) {
			if(sub[i]!='0')
				change(sub[i] - '0');
			printf("亿");
		}
		else if (i == 8) {
			if(mark-1>8&& sub[i] == '0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				change(sub[i] - '0');
				printf("仟");
			}
		}
		else if(i==7) {
			if (mark - 1 > 7 && sub[i] == '0'&&sub[i+1]!='0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				change(sub[i] - '0');
				printf("佰");
			}
		}
		else if (i == 6) {
			if (mark - 1 > 6 && sub[i] == '0' && sub[i + 1] != '0'&& sub[i - 1] != '0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				if (mark - 1 == 2 && sub[i] == '1');
				else
					change(sub[i] - '0');
				printf("拾");
			}
		}
		else if (i == 5) {
			if (sub[i] != '0'){
				change(sub[i] - '0');
				printf("万");}
			else if (mark - 1 > 5 && sub[i] == '0' ) {
				printf("万");
				change(sub[i] - '0');
			}
		}
		else if (i == 4) {
			if (mark - 1 > 4 && sub[i] == '0' && sub[i + 1] != '0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				change(sub[i] - '0');
				printf("仟");
			}
		}
		else if (i == 3) {
			if (mark - 1 > 3 && sub[i] == '0' && sub[i + 1] != '0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				change(sub[i] - '0');
				printf("佰");
			}
		}
		else if (i == 2) {
			if (mark - 1 > 2 && sub[i] == '0' && sub[i + 1] != '0')
				change(sub[i] - '0');
			else if (sub[i] != '0') {
				if (mark - 1 == 2 && sub[i] == '1');
				else
					change(sub[i] - '0');
				printf("拾");
			}
		}
		else if (i == 1) {
			if (mark - 1==1 && sub[i] == '0')
				change(sub[i] - '0');
			if (sub[i] != '0')
				change(sub[i] - '0');
			printf("元整");
		}
	}
	return 0;
}
void change(int a) {
	if (a == 0)
		printf("零");
	else if (a == 1)
		printf("壹");
	else if (a == 2)
		printf("贰");
	else if (a == 3)
		printf("叁");
	else if (a == 4)
		printf("肆");
	else if (a == 5)
		printf("伍");
	else if (a == 6)
		printf("陆");
	else if (a == 7)
		printf("柒");
	else if (a == 8)
		printf("捌");
	else if (a == 9)
		printf("玖");


}