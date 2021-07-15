#include "utility.h"
int Human_x = 0, Human_y = 0;
#include<stdio.h>
#include<ctype.h>
#include <string.h>
int main() {
	int N;
	char a[13];
	scanf("%d", &N);
	int t = 0;
	char x;
	int hang = 0;
	while (hang != N + 3) {
		fgets(map[hang], 15, stdin);
		hang++;
	}
	while ((x = getchar()) != EOF) {
		if (islower(x))
			a[t++] = x;
	}
	for (int i = 1; i < N+1; i++){
		for (int j = 1; j < N + 1; j++)
			if (map[i][j] == 'A'){
				human_x = i, human_y = j;
				break;
			}
		if (human_x != 0 && human_y != 0)
			break;
	}
	for (int i = 0; i < t ; i++) {
		Human_x = human_x, Human_y = human_y;
		if (a[i] == 'a') {
			Human_y--;
			if (Human_y == 0)
				Human_y = N;
		}
		if (a[i] == 'd') {
			Human_y++;
			if (Human_y == N + 1)
				Human_y = 1;
		}
		if (a[i] == 'w') {
			Human_x--;
			if (Human_x == 0)
				Human_x = N;
		}
		if (a[i] == 's') {
			Human_x++;
			if (Human_x == N + 1)
				Human_x = 1;
		}
		readMap(N + 2);
		if (human_x == 0 && human_y == 0)
			break;
	}
	printf("Game Over!");
}
void readMap(const size_t map_size) {
	static int is_alive = 0, is_stop = 0;
	if (is_stop == 1 && is_alive == 1) {
		is_alive = 2, is_stop = 2;
		move(map_size, &is_alive, &is_stop);
	}
	else {
		is_alive = 0, is_stop = 0;
		if (map[Human_x][Human_y] == '$')
			is_alive = 1;
		else if (map[Human_x][Human_y] == '@')
			is_stop = 1, is_alive = 1;
		else if (map[Human_x][Human_y] == '#')
			is_stop = 1;
		move(map_size, &is_alive, &is_stop);
	}
}
void printMap(const size_t map_size) {
	for (int i = 1; i <= map_size; i++) {
		printf("%s", map[i]);
	}
}
void move(size_t map_size, int* is_alive, int* is_stop) {
	if (*is_stop == 1 && *is_alive == 0)
		printMap(map_size);
	else if (*is_stop == 2 && *is_alive == 2) {
		human_x = Human_x, human_y = Human_y;
		printMap(map_size);
	}
	else if (*is_stop == 1 && *is_alive == 1) {
		map[human_x][human_y] = ' ';
		map[Human_x][Human_y] = 'A';
		human_x = Human_x, human_y = Human_y;
		printMap(map_size);
	}
	else if (*is_stop == 0 && *is_alive == 1)
		human_x = 0, human_y = 0;
	else {
		map[human_x][human_y] = ' ';
		map[Human_x][Human_y] = 'A';
		human_x = Human_x, human_y = Human_y;
		printMap(map_size);
	}
}