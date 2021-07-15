#include <stdio.h>
#include <string.h>
#include "indexOf.h"

int main() {
  int t;
  scanf("%d%*c", &t);
  while (t--) {
    // Prompt the user to enter a string
    printf("Enter the first string: ");
    char s1[80];
    fgets(s1, 80, stdin);

    // Prompt the user to enter a string
    printf("Enter the second string: ");
    char s2[80];
    fgets(s2, 80, stdin);

    printf("%d\n", indexOf(s1, s2));
  }
  return 0;
}
