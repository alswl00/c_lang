#include <stdio.h>

int main(void) {

	int n = 0;
	int t = 0;
	scanf_s("%d", &n);
	printf("1���� %d���� Ȧ��: ",n);
	for (int i=1; i <= n; i+=2) {
			printf("%d ", i);
			t += i;
	}
	printf("\n1 ~ %d���� Ȧ���� ��: %d\n",n, t);
}