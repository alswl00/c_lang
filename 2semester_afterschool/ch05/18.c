#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, num, temp;
	int *p = NULL;

	printf("배열의 크기를 결정하는 숫자를 입력하세요 : ");
	scanf("%d", &num);
	p = malloc(num * sizeof(int));
	for (i = 0; i < num; i++, p++)
		scanf("%d", p);
	p -= num;

	for (i = 0; i < num; i++) {
		for (int j = i; j< num ; j++) {
			if (*(p + i) > *(p + j)) {
				temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp;
			}
		}
	}
	for (i = 0; i < num; i++, p++)
		printf("%d ", *p);

	return 0;
}