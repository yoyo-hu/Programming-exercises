int myStrlen(char a[]) {
	int i;
	for (i = 0; a[i] != '\0'; ++i) {}
	return i;
}

int myStrcmp(char a[], char b[]) {
	int i;
	for (i = 0; a[i] && b[i] && a[i] == b[i]; ++i) {}
	return a[i] - b[i];
}

void myStrcpy(char des[], char src[]) {
	int len = myStrlen(src);
	for (int i = 0; i <= len; ++i) {
		des[i] = src[i];
	}
}
