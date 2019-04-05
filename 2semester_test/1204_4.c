#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void swap(char *p);
int main() {
	char s[50];
	printf("영문자 입력 : ");
	scanf("%s", s);
	swap(s);
	printf("변환된 문자 : %s\n", s);

	return 0;
}

void swap(char *p) {
	char temp;
	for (int i = 0; i < strlen(p); i++) {
		for (int j = strlen(p)-1; j > 0; j--) {
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}
	}

}