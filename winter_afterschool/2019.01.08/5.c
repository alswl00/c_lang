#include <stdio.h>
#include <string.h>

int main(void) {
	char *s1 = "This is a string";
	char *s2 = "st";
	char *ptr;
	ptr = strstr(s1, s2);
	printf("string : %s\n", s1);
	printf("%s로 시작하는 s1의 \n나머지 문자열 : %s\n", s2, ptr);
	ptr = strpbrk(s1, s2);
	printf("첫 문자가 일치하는 s1의 \n나머지 문자열 : %s\n", ptr);
	return 0;
}