#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size;
	int *arr = NULL;             //포인터 초기화는 null로
	int sum = 0;
	double average = 0.0;
	int i;
	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);
	printf("%d개의 정수를 입력하세요 : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < size; i++)
		sum += arr[i];
	average = (double)sum / (double)size;
	printf("합계 : %d, 평균 : %f\n", sum, average);
	free(arr);
	arr = NULL;
	return 0;
}