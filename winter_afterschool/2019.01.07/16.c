#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void) {
	char c[10];
	printf("���ڿ��� �Է��Ͻÿ�>>");
	scanf("%s", c);

	for (int i = 0; i <= strlen(c); i++) {
		if (c[i] <= 65 || c[i] <= 96) {
			printf("%c",tolower(c[i]));
		}
		else {
			printf("%c", toupper(c[i]));
		}
	}
	printf("\n");
}