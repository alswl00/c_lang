#include <stdio.h>
int intersection(int a[], int s_a, int b[], int s_b, int r[]) {
	int i, j, cnt = 0;
	for (i = 0; i < s_a; i++)
		for (j = 0; j < s_b; j++)
			if (a[i] == b[j])
				r[cnt++] = a[i];
	return cnt;
}
int main() {
	int a[] = { 1,3,5 };
	int b[] = { 3,5,8,9 };
	int r[20];
	int cnt, i, size_a, size_b;
	size_a = sizeof(a) / 4;
	size_b = sizeof(b) / 4;
	cnt = intersection(a, size_a, b, size_b, r);
	for (i = 0; i < cnt; i++)
		printf("%d ", r[i]);
	printf("\n");

	return 0;
}