#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int size;
	int *arr = NULL;             //������ �ʱ�ȭ�� null��
	int sum = 0;
	double average = 0.0;
	int i;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);
	printf("%d���� ������ �Է��ϼ��� : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < size; i++)
		sum += arr[i];
	average = (double)sum / (double)size;
	printf("�հ� : %d, ��� : %f\n", sum, average);
	free(arr);
	arr = NULL;
	return 0;
}