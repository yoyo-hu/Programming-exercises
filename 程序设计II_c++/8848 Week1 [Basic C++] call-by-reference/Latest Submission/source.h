void addxy(int x,int y,int total) {
    printf("Total from inside addxy: %d\n", x+y);

}
void subxy(int x,int y,int& total) {
	total =x-y;
	printf("Total from inside subxy: %d\n", total);

}