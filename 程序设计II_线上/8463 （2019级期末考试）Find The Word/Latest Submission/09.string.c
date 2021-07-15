#include <stdio.h>
#include <string.h>
int main() {
	int point[100] = { 0 };
	char sub[50];
	char paragraph[100][50];
	int word=0,letter=0;
	char carrier;
	while ((carrier = getchar()) != '\n') {
		point[word+1]++;
		if (carrier == ' ') {
		if(letter!=0){
			paragraph[word][letter++] = '\0';
			word++;
			point[word + 1] += point[word];
			letter = 0;
		}
		}
		else
			paragraph[word][letter++] = carrier;
	}
	if(letter!=0)
		paragraph[word][letter++] = '\0';
	scanf("%s", sub);
	for (int i = 0; i < word; i++) {
		if (strcmp(paragraph[i], sub) == 0)
			printf("%d ", point[i]);
	}
	return 0;
}