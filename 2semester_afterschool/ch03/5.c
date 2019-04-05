#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char Encrypt(char *);
int main() {
	char num[256];
	scanf("%c", num);
	num[10] = Encrypt(&num);
	printf("암호화된 문자열 : %s\n", num);
}

char Encrypt(char *num) {
	for (int i = 0; i < 10; i++) {
		num[i]++;
	}
	return num;
}