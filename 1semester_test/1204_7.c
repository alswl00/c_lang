#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n; float sum = 1;
	printf("������ ���� n�� �Է��ϼ���. : ");
	scanf("%d", &n);
	printf("1 + ");
	for (int i = 2; i <= n; i++) {
		if (i == n)
			printf("1/%d ", i);
		else 
			printf("1/%d + ", i);
		sum += (float)1 / i;
	}
	printf("= %.3f\n", sum);
	return 0;
}