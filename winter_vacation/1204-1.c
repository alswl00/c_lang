#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, max = 0, min = 100;
	int score[5] = { 0 };
	printf("���� �Է� : ");
	while (1) {
		scanf("%d", &num);
		if (num < 0) break;
		switch (num / 10) {
		case 10: case 9:
			score[0]++; break;
		case 8:
			score[1]++; break;
		case 7:
			score[2]++; break;
		case 6:
			score[3]++; break;
		default:
			score[4]++;
		}
		if (max < num) max = num;
		if (min > num) min = num;
	}
	for (int i = 90, k = 0; i >= 50; i -= 10, k++) {
		if (i == 90) printf("%d�� �̻� : ", i);
		else if (i == 50) printf("%d�� �̸� : ", i + 10);
		else printf("%d�� �� : ", i);
		for (int j = 0; j < score[k]; j++)
			printf("*");
		printf("\n");
	}
	printf("�ְ� ���� : %d\n", max);
	printf("���� ���� : %d\n", min);

	return 0;
}