#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a[3], i;
	for (i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	printf("a[3]�� ��Ұ� ���:");
	for (i = 0; i < 3; i++) {
		printf("%2d", a[i]);
	}
	printf("\n%d", sizeof(a));
	printf("\n");
	return 0;
}