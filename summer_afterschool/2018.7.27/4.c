#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n[20];
	int count[10] = { 0 };
	int max=0, no;
	printf("0~9까지의 수 20개를 입력하시오>> ");
	for (int i = 0; i < 20; i++) {
		scanf("%d", &n[i]);
		if (n[i] < 0 || n[i]>9) {
			printf("잘못 입력하셨습니다.");
			return;
		}
		for (int j=0; j < 10; j++) {
			if (n[i] == j)
				count[j]++;
			if (count[j] > max) {
				max = count[j];
				no = j;
			}
		}
	}
	printf("빈도수 : %d회   숫자 : %d번\n", max, no);

	return 0;
}