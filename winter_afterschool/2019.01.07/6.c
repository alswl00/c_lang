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
	char *t = "�߱�";
	printf("���ڿ� s�� ����:%d\n", my_strlen(s));
	printf("���ڿ� t�� ����:%d\n", strlen(t));
	return 0;
}