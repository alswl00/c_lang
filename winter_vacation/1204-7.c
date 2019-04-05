#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime_num(int);
int main() {
	int n, k, cnt = 0;;
	printf("소수를 구하려는 최종 숫자를 입력하세요. ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		k = prime_num(i);
		if (k == 0) continue;
		else {
			printf("%d ", k);
			cnt++;
		}
	}

	printf("\n2 ~ %d까지의 소수 갯수 : %d\n", n, cnt);
	return 0;
}
int prime_num(int i) {
	int j;
	for (j = 2; j <= i; j++) {
		if (i % j == 0) break;
	}
	if (i == j) return j;
	else return 0;
}