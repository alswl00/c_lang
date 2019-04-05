//p.67 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void _strcat(char *a,char *b) {
	int length = strlen(a);
	a += length;
	*a = *b;
	a -= strlen(a) + strlen(b);
}

int main(void) {
	char a[5] = "love";
	char b[6] = "holic";

	_strcat(a, b);
	printf("%s\n", a);
	return 0;
}