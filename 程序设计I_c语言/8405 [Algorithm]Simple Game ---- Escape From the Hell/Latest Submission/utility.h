#ifndef UTILITY_H
#define UTILITY_H
#include <stdlib.h>

/*
 * read the map from stdin.
 * @param map_size  size of the map.
 */
void readMap(const size_t map_size);

/*
 * print the map while human is alive.
 * @param map_size  size of the map.
 */
void printMap(const size_t map_size);

/*
 * move the human in map
 * @param map_size  the size of the map
 * @param is_alive  the human is alive or not.
 *                  If the human die in this turn, set it 0.
 * @param is_stop   stop in this turn or not. If he stop in next turn, set it 1.
 */
void move(size_t map_size, int *is_alive, int *is_stop);

char map[15][15] = {};

// position of the human
int human_x = 0, human_y = 0;

#endif