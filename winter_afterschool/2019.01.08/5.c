#include <stdio.h>
#include <string.h>

int main(void) {
	char *s1 = "This is a string";
	char *s2 = "st";
	char *ptr;
	ptr = strstr(s1, s2);
	printf("string : %s\n", s1);
	printf("%s�� �����ϴ� s1�� \n������ ���ڿ� : %s\n", s2, ptr);
	ptr = strpbrk(s1, s2);
	printf("ù ���ڰ� ��ġ�ϴ� s1�� \n������ ���ڿ� : %s\n", ptr);
	return 0;
}