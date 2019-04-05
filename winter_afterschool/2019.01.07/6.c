#include <stdio.h>
#include <string.h>

int my_strlen(char *st) {
	int n = 0;
	while (*st++ != '\0')
		n++;
	return n;
}

int main(void) {
	char s[] = "swimming";
	char *t = "야구";
	printf("문자열 s의 길이:%d\n", my_strlen(s));
	printf("문자열 t의 길이:%d\n", strlen(t));
	return 0;
}