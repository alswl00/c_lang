#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct person {
	char name[7];
	char tel[14];
	char address[21];
};

int main(void) {

	struct person per[3];

	for (int i = 0; i < 3; i++) {
		printf("�̸� : ");
		gets(per[i].name);
		printf("��ȭ��ȣ : ");
		gets(per[i].tel);
		printf("�ּ� : ");
		gets(per[i].address);
		printf("-------------------------------------------\n");
	}

	printf("�� ��    ��ȭ��ȣ        ��  ��\n");
	for (int i = 0; i < 3; i++) {
		printf("%s %s %s\n", per[i].name, per[i].tel, per[i].address);
	}
}