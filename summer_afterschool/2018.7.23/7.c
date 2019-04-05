#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, j,b,s;
	scanf("%d %d", &i, &j);
	/*if (i > j) {
		b = i; s = j;
	}
	else {
		b = j; s = i;
	}
	printf("몫 : %d\t나머지 : %d\n", b / s, b%s);*/

	int a = (i > j) ? printf("몫 : %d\t나머지 : %d\n", i / j, i%j) : printf("몫 : %d\t나머지 : %d\n", j / i, j%i);
	return 0;
}