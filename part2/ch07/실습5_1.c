#include <stdio.h>

void sort(int *p,int size);

int main(void) {
	int i;
	int size = 5;
	int a[6];
	
	for (i = 0; i < 5; i++) {
		printf("1-100 ������ %d��° ������ �Է��Ͻÿ� : ", i + 1);
		scanf_s("%d", &a[i]);
		for (int j = 0; j < i + 1; j++) {
			if (i!=j&&a[i] == a[j]) {
				printf("��ġ�� ���� �ֽ��ϴ�. \n");
				i--;
				break;
			}
		}
	}
	printf("���� �� : ");
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);

	sort(a,size);
	
	printf("\n������ �� : ");
	for (int i = 0; i < 5; i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}

void sort(int *p,int size) {
	int temp;
	for (int i = 0; i < size-1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (p[i] > p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
}