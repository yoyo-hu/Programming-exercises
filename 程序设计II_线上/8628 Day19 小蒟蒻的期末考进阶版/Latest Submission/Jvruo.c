#include<stdio.h>
long long a[45];
int b[45];
long long r[1050000];
long long l[1050000];
long long num;
int q, w;
int flag = 0;
long long sum = 0;
void QuickSort(long long* arr, int low, int high)
{
	if (low < high)
	{
		int i = low;
		int j = high;
		long long k = arr[low];
		while (i < j)
		{
			while (i < j && arr[j] <= k)
			{
				j--;
			}
			if (i < j)
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] > k)
			{
				i++;
			}
			if (i < j)
			{
				arr[j--] = arr[i];
			}
		}
		arr[i] = k;
		QuickSort(arr, low, i - 1);
		QuickSort(arr, i + 1, high);
	}
}
void QuickSort1(long long* arr, int low, int high)
{
	if (low < high)
	{
		int i = low;
		int j = high;
		long long k = arr[low];
		while (i < j)
		{
			while (i < j && arr[j] >= k)
			{
				j--;
			}
			if (i < j)
			{
				arr[i++] = arr[j];
			}
			while (i < j && arr[i] < k)
			{
				i++;
			}
			if (i < j)
			{
				arr[j--] = arr[i];
			}
		}
		arr[i] = k;
		QuickSort1(arr, low, i - 1);
		QuickSort1(arr, i + 1, high);
	}
}
void dfs(int k, int n, long long t) {
	if (sum <= t) {
		if (flag == 0) {
			l[q++] = sum;
		}
		else {
			r[w++] = sum;
		}
	}
	else return;
	for (int i = k; i < n; i++) {
		if (b[i] == 1)continue;
		sum += a[i];
		b[i] = 1;
		if (sum > t) {
			b[i] = 0;
			sum -= a[i];
			break;
		}
		dfs(i + 1, n, t);
		b[i] = 0;
		sum -= a[i];
	}
	return;
}
int main() {
	int n;
	long long t;
	long long temp;
	scanf("%d%lld", &n, &t);
	for (int i = 0; i < n; i++) {
		scanf("%lld", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	dfs(0, n / 2, t);
	flag = 1;
	dfs(n / 2, n, t);
	QuickSort(r, 0, w - 1);
	QuickSort1(l, 0, q - 1);
	int u = 0;
	for (int i = 0; i < q; i++) {
		while (u<w && l[i] + r[u]>t)++u;
		num += w - u;
	}


	printf("%lld", num);
	return 0;
}
