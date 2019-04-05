#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main(void) {
	char s1[] = "abcdefg";
	char s2[] = "0162";
	//strncpy(s1+3, s2, strlen(s2));
	memcpy(s1 + 3, s2, strlen(s2));
	printf("%s\n", s1);
	printf("%s\n", s2);
	return 0;
}