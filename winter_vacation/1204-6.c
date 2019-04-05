#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int fact(int);
int main() {
	int num, sum = 0;
	printf("마지막 수 입력 : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		sum += fact(i);
		if (i != num) printf("%d! + ", i);
		else printf("%d! = ", i);
	}
	printf("%d\n", sum);

	return 0;
}
int fact(int n) {
	int sum = 0;
	if (n == 1) return 1;
	else return n * fact(n - 1);
}