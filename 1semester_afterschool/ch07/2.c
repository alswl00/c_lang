#include <stdio.h>

int main(void) {
	int num = 100;
	int i;
	/*printf("%d�� ������ : ", num);
	for (i = 7; i >= 0; i--) {
		printf("%d ", num >> i & 1);
	}
	
	printf("\n%d�� ������ : ", num);
	i = 7;
	while (i >= 0) {
		printf("%d ", num >> i & 1);
		i--;//--i;
	}
	
	printf("\n%d�� ������ : ", num);
	i = 7;
	do {
		printf("%d ", num >> i & 1);
		i--;
	} while (i >= 0);*/
	
	i = 7;
	printf("%d�� ������ : ", num);
	for (;;) {
		if (i >= 0) {
			printf("%d ", num >> i & 1);
			i--;
		}
		else { break; }
	}
}