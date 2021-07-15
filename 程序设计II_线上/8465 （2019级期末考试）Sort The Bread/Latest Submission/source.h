int max(struct Bread a) {
	int result = a.price;
	if (a.size > result)
		result = a.size;
	if (a.weight > result)
		result = a.weight;
	return result;
}
void sort(struct Bread sub[10], int num) {
	int key[10];
	struct Bread mi;
	int miKey;
	for (int i = 0; i < 10; i++) {
		key[i] = sub[i].price + sub[i].size + sub[i].weight - max(sub[i]);
	}
	for (int i = 0; i < 10-1; i++) {
		for (int j = 0; j < 10-i-1; j++)
			if (key[j] < key[j + 1]) {
				miKey = key[j];
				key[j] = key[j + 1];
				key[j + 1] = miKey;
				mi = sub[j];
				sub[j] = sub[j + 1];
				sub[j + 1] = mi;
				
			}
	}
}