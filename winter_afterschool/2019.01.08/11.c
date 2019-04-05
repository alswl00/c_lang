#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void phone(char s[]) {
	int number = atoi(s);
	int len = strlen(s);
	int a, b, c;

	char *t = (char*)malloc(13);
	c = number % 10000;
	number = (number - c) / 10000;
	if (len >= 11) {
		b = number % 10000;
		number = (number - b) / 10000;
	}
	else {
		b = number % 2000;
		number = (number - b) / 1000;
	}
	a = number % 1000;
	sprintf(t, "%03d-%d-%d", a, b, c);
	printf("%s\n", t);
}

int main(void) {
	char str[50] = "0104441321";
	phone(str);
	return 0;
}