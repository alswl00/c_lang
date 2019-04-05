#include <stdio.h>

int main() {
	int a[] = { 1,2,3,4 };
	int b[] = { 4,5,6 };
	int r[7];
	for (int i = 0; i < sizeof(a)/4; i++) {
		r[i] = a[i];
	}
	for (int i = sizeof(a) / 4; i < 7; i++) {
		r[i] = b[i-sizeof(a)/4];
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < i; j++) {
			if (r[i] == r[j]) {
				r[i] = 0;
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		if (r[i] == 0) {
			while (i < 7) {
				r[i] = r[i + 1];
				i++;
			}
		}
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", r[i]);
	}
	printf("\n");


	return 0;
}