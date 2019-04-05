#include <stdio.h>

void main() {
	int temp;
	int ct[5] = { 3,1,2,5,4 };
	printf("정렬 전 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", ct[i]);
	}
	printf("\n");

	for (int i = 0; i <= 3; i++) {
		for (int j = i + 1; j <= 4; j++) {
			if (ct[i] < ct[j]) {
				temp = ct[i];
				ct[i] = ct[j];
				ct[j] = temp;
			}
		}
	}

	printf("정렬 후 : ");
	for (int i = 0; i < 5; i++) {
		printf("%d ", ct[i]);
	}
	printf("\n");


}