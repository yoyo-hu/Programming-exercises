#include<stdio.h>
#define MAX 100
int main() {
    int lightNumber = 0;
    int gap = 0;
    int counter = 0;
    int offLight = 0;
    int isLight[MAX] = {0};
    int currentPos = 0;
    scanf("%d %d %d", &lightNumber, &currentPos, &gap);
    offLight = lightNumber;
    printf("%d", currentPos);
    offLight--;
    isLight[currentPos] = 1;
    while (offLight > 0) {
        currentPos = (currentPos + 1) % lightNumber;
        if (isLight[currentPos] == 0)
            counter++;
        if (counter == gap) {
            printf(" %d", currentPos);
            counter = 0;
            isLight[currentPos] = 1;
            offLight--;
        }
    }
    printf("\n");
    return 0;
}
