#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRINT1(x) printf("x=%d\n",x);
#define PRINT2(x) printf(#x"= %d\n",x);

int main(void) {
	int num;
	scanf("%d", &num);
	PRINT1(num);
	PRINT2(num);
}