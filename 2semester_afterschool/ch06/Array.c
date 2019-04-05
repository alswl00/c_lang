#include <stdio.h>
#include "Array.h"

void PrintArray(int *arr, int size) {
	for (int i = 0; i < size ; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int GetSumOfArray(int *arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}

void SortArray(int *arr, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = i; j < size; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(void) {
	int x[5] = { 43,6,24,88,34 };
	int y[10] = { 12,35,7,45,78,22,98,77,1,28 };
	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("합계 : %d\n\n", GetSumOfArray(x, 5));

	printf("y 배열 : ");
	PrintArray(y, 10);
	SortArray(y, 10);
	PrintArray(y, 10);

	
}