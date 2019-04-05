#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int num, max = 0, min = 100;
	int score[5] = { 0 };
	printf("점수 입력 : ");
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
		if (i == 90) printf("%d점 이상 : ", i);
		else if (i == 50) printf("%d점 미만 : ", i + 10);
		else printf("%d점 대 : ", i);
		for (int j = 0; j < score[k]; j++)
			printf("*");
		printf("\n");
	}
	printf("최고 점수 : %d\n", max);
	printf("최저 점수 : %d\n", min);

	return 0;
}