#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

#define MAX(a,b) a > b ? a : b

int getMax(int *arr, int size) {
  if (size < 1) return -1;
  int max = arr[0];
  for (int i = 1; i < size; ++i) {
    max = MAX(max, arr[i]);
  }
  return max;
}

int main() {
  int count[26] = {0};
  int count_word = 0;
  BOOL start_word = 0;
  char c = 0;
  
  // input and count
  while ((c = getchar()) != EOF) {
    if ('a' <= c && c <= 'z') {
      start_word = 1;
      count[c - 'a']++;
    } else {
      if (start_word == 1) {
        start_word = 0;
        count_word++;
      }
    }
  }
  if (start_word == 1) count_word++;

  // ready to output
  int max = getMax(count, 26);
  max = MAX(count_word, max);
  int n = max;
  for (; n >= 1; --n) {
    printf("%d\t", n);
    for (int i = 0; i < 26; ++i) {
      if (count[i] != 0) {
        if (count[i] >= n) {
          printf("*");
        } else {
          printf(" ");
        }
      }
    }
    if (count_word >= n) printf("*");
    else printf(" ");
    printf("\n");
  }
  if (max > 0) {
    printf(" \t");
    for (int i = 0; i < 26; ++i) {
      if (count[i] > 0) {
        printf("%c", i + 'a');
      }
    }
    if (count_word > 0) {
      printf("W");
    }
    printf("\n");
  }

  // test
  /*printf("Words: %d\n", count_word);
  for (int i = 0; i < 26; ++i) {
    printf("%d ", count[i]);
  }
  printf("\n");*/

  return 0;
}
