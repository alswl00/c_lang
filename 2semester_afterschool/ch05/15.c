#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int arr[10] = { 0 };
	int i, max;
	int *p = NULL;

	printf("10���� ������ �Է��ϼ��� : ");
	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);

	max = arr[0];
	p = &arr[1];
	for (i = 1; i < 10; i++, p++) {
		if (*p > max)
			max = *p;
	}
	printf("�迭�� �ִ밪 : %d\n", max);
	return 0;
}