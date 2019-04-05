//p.62 ¿¹ 2-7

#include <stdio.h>
int sum;
int main() {
	int i;
	for (i = 1; i <= 10; i++)
		printf("%d\n", sum += i);
	printf("1+2+3+...+=%d\n", sum);
	return 0;
}