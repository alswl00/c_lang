#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	unsigned char c[50];
	int count[3] = { 0 };
	printf("���ڿ��� �Է��Ͻÿ�>>");
	scanf("%s", c);

	for (int i = 0; i < strlen(c); i++) {
		if (c[i] >= 65 && c[i] <= 122) count[0]++;
		else if (c[i] >= '0' && c[i] <= '9') count[1]++;
		else count[2]++;
	}
	printf("����: %d    ����: %d    Ư����ȣ: %d\n", count[0], count[1], count[2]);
}