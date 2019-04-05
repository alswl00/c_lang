#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year;
	printf("³âµµ : ");
	scanf("%d", &year);
	if (year % 4 == 0) {
		if (year % 100==0) {
			if (year % 400 == 0) {
				printf("À±³â\n");
				return;
			}
			printf("Æò³â\n"); return;
		}
		printf("À±³â\n"); return;
	}

	return 0;
}