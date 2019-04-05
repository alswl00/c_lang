#include <stdio.h>

int main(void) {

	int n = 0;
	int t = 0;
	scanf_s("%d", &n);
	printf("1에서 %d까지 홀수: ",n);
	for (int i=1; i <= n; i+=2) {
			printf("%d ", i);
			t += i;
	}
	printf("\n1 ~ %d까지 홀수의 합: %d\n",n, t);
}