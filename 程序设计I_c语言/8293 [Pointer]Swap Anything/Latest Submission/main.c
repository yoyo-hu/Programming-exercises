#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "swapAnyThing.h"

void swapAnyThing(void *a, void *b, size_t val_size);

typedef struct {
  char c;
  double x;
  double y;
} Coordinate;

void printCoordinate(Coordinate pos) {
  printf("Pos %c\n", pos.c);
  printf("x: %lf, y: %lf\n", pos.x, pos.y);
}

int main() {
  int a = 0, b = 0;
  float c = 0, d = 0;
  Coordinate pos1, pos2;
  
  // Input
  scanf("%d%d", &a, &b);
  scanf("%f%f", &c, &d);
  scanf(" %c %lf%lf", &(pos1.c), &(pos1.x), &(pos1.y));
  scanf(" %c %lf%lf", &(pos2.c), &(pos2.x), &(pos2.y));
  
  // Print Initial
  printf("Initial\n\n");
  printf("a = %d, b = %d\n", a, b);
  printf("c = %f, d = %f\n", c, d);
  printCoordinate(pos1);
  printCoordinate(pos2);

  // Swap
  swapAnyThing(&a, &b, sizeof(int));
  swapAnyThing(&c, &d, sizeof(float));
  swapAnyThing(&pos1, &pos2, sizeof(Coordinate));
  
  // Print Value after swapping
  printf("\nAfter Swapping\n\n");
  printf("a = %d, b = %d\n", a, b);
  printf("c = %f, d = %f\n", c, d);
  printCoordinate(pos1);
  printCoordinate(pos2);

  return 0;
}
