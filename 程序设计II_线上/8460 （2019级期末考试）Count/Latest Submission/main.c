#include <stdio.h>
int main() {
	int N;
	int a[1001] = { 0 };
	int result[11] = { 0 };
	int sub;
	int temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
        if(i!=0)
        printf("\n");
		scanf("%d", &sub);
		int mark = 0;
		if(a[sub]==0){
			mark = 1;
			for (int j = sub; j >= 0&&a[j]==0; j--){
					a[j] = j;
					temp = j;
				while (temp != 0) {
					result[temp % 10]++;
					temp/= 10;
				}
			}
		}
		else{
			for (int j = sub+1; a[j] != 0; j++) {
				a[j] = 0;
				temp = j;
				while (temp != 0) {
					result[temp % 10]--;
					temp /= 10;
				}
			}
		}
		for (int j = 0; j < 10; j++)
			printf("%d ", result[j]);
	}
	return 0;
}