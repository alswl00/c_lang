#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
};

int main(void) {
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("�й��� �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�(���ڿ�): ");
		scanf("%s", list[i].name, 10);
		printf("���� ������ �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].kor);
		printf("���� ������ �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].eng);
		printf("���� ������ �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].mat);
		printf("========================================\n");

		list[i].sum = list[i].kor + list[i].eng + list[i].mat;
		list[i].avg = list[i].sum / (float)3;
	}
	printf("\n           ��   ��   ǥ\n");
	printf("   �й�  �̸�  ����  ����  ����  ����  ���  \n");

	for (i = 0; i < 3; i++) {
		printf("%6d %8s %4d %4d %4d %6d %f \n", list[i].number, list[i].name, list[i].kor, list[i].eng, list[i].mat, list[i].sum, list[i].avg);
	}
	return 0;
}