#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char c[50];
	int len;
	int sum = 0;
	scanf("%s", c);
	len = strlen(c);
	
	for (int i = 0; i < len; i++) {
		if (c[i] >= 97 && c[i] <= 122) sum += (int)(c[i] - 96);
		else if (c[i] >= 65 && c[i] <= 90) sum += (int)(c[i] - 64);
	}
	printf("%d\n", sum);
}