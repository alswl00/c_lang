#include <stdio.h>

void PrintArray(int *arr, int size);
int GetSumOfArray(int *arr, int size);

int main(void) {
	int x[5] = { 10,20,30,40,50 };
	int y[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sum;

	printf("x 배열 : ");
	PrintArray(x, 5);
	sum = GetSumOfArray(x, 5);
	printf("x 배열의 합계 : %d\n\n", sum);

	printf("y 배열 : ");
	PrintArray(y, 10);
	sum = GetSumOfArray(y, 10);
	printf("y 배열의 합계 : %d\n\n", sum);

	printf("y 배열의 일부분 : ");
	PrintArray(y+2, 5);			//3,4,5,6,7
	sum = GetSumOfArray(y+2, 5);
	printf("y 배열의 부분합계 : %d\n", sum);
}

void PrintArray(int *arr, int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);		//arr[i] == *(arr+i)
	}
	printf("\n");
}

int GetSumOfArray(int *arr, int size) {				//int *arr == int arr[]
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}