#include <stdio.h>
#include "utility.h"

#define is_in(x) ((x) <= map_size && (x) >= 1)
#define out(x) (toward_##x == 1 ? 1 : map_size)

int main() {
  int map_size = 0, is_alive = 1, is_stop = 0;
  scanf("%d", &map_size);
  if (!(map_size < 20 && map_size > 0)) return 1;
  readMap(map_size);
  char flag = 0;
  for (int i = 1; i <= map_size; ++i) {
    for (int j = 1; j <= map_size; ++j) {
      if ('A' == map[i][j]) {
        map[i][j] = ' ';
        human_x = i, human_y = j, flag = 1;
        break;
      }
    }
    if (flag) break;
  }
  while(is_alive) {
    move(map_size, &is_alive, &is_stop);
    if (is_alive) printMap(map_size);
    else puts("Game Over!");
  }
}

void readMap(size_t map_size) {
  getchar();
  for (int i = 0; i <= map_size + 1; ++i) {
    scanf("%19[^\n]%*c", map[i]);
  }
}

void printMap(size_t map_size) {
  for (int i = 0; i <= map_size + 1; ++i) {
    for (int j = 0; j <= map_size + 1; ++j) {
      putchar((i == human_x && j == human_y) ? 'A' : map[i][j]);
    }
    putchar('\n');
  }
}

void move(size_t map_size, int *is_alive, int *is_stop) {
  if (!*is_alive) return;
  int toward_x = 0, toward_y = 0;
  char ctrl = 0;
  if (!~scanf(" %c", &ctrl)) {
    exit(0);
  }
  switch (ctrl) {
    case 'w':
      toward_x = -1;
      break;
    case 'a':
      toward_y = -1;
      break;
    case 's':
      toward_x = 1;
      break;
    case 'd':
      toward_y = 1;
      break;
    default:
      exit(1);
  }
  if (*is_stop) {
    *is_stop = 0;
    return;
  }
  int next_x = is_in(human_x + toward_x) ?human_x + toward_x : out(x),
      next_y = is_in(human_y + toward_y) ?human_y + toward_y : out(y);
  switch (map[next_x][next_y]) {
    case '#':
      break;
    case '@':
      *is_stop = 1;
      human_x = next_x, human_y = next_y;
      break;
    case '$':
      *is_alive = 0;
      break;
    case ' ':
      human_x = next_x, human_y = next_y;
      break;
    default:
      exit(0);
  }
}