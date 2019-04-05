#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char d[15] = "love";
	char s[6] = "holic";
	strcat(d, s);
	printf("strcat :%s\n", d);
	strncat(d, s, 3);
	printf("strncat: %s\n", d);
	return 0;
}