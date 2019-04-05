#include <stdio.h>
void sort(int *, int size);
int main(void) {
	int i;
	int size = 5;
	int a[6];

	for (i = 0; i < size; i++) {
		printf("1-100 사이의 %d 번째 정수를 입력하시오 : ", i + 1);
		scanf_s("%d", &a[i]);
	}
		printf("정렬하기 전 입력된 값 ");
		for (i = 0; i < size; i++)
			printf(" %5d", a[i]);
		printf("\n");

		sort(a, size);
		printf("오름차순 정렬한 값 ");
		for (i = 0; i < size; i++)
			printf(" %5d", a[i]);
		printf("\n");
		return 0;
}

void sort(int *a, int size) {
	int i, j;
	int temp;
	printf("함수에서 정렬 직전의 값 ");
	for (i = 0; i < size; i++)
		printf(" %5d", a[i]);
	printf("\n");

	for (i = 0; i < size - 1; i++) {
		for (j = i + 1; j < size; j++)
			if (*(a + i) > *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
	}
	printf("함수에서 정렬 직후의 값 ");
	for (i = 0; i < size; i++)
		printf(" %5d", a[i]);
	printf("\n");
	return;
}