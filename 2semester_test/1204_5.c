#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int change(int num);
int main(){
	int num,f;
	printf("¼·¾¾ ÀÔ·Â : ");
	scanf("%d", &num);

	f=change(num);
	printf("È­¾¾ ¿Âµµ : %d\n", f);
	return 0;
}

int change(int num) {
	int f;
	f = num * 9 / 5 + 32;
	return f;
}