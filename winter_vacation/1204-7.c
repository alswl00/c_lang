#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int prime_num(int);
int main() {
	int n, k, cnt = 0;;
	printf("�Ҽ��� ���Ϸ��� ���� ���ڸ� �Է��ϼ���. ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		k = prime_num(i);
		if (k == 0) continue;
		else {
			printf("%d ", k);
			cnt++;
		}
	}

	printf("\n2 ~ %d������ �Ҽ� ���� : %d\n", n, cnt);
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