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
		printf("이름 : ");
		gets(per[i].name);
		printf("전화번호 : ");
		gets(per[i].tel);
		printf("주소 : ");
		gets(per[i].address);
		printf("-------------------------------------------\n");
	}

	printf("이 름    전화번호        주  소\n");
	for (int i = 0; i < 3; i++) {
		printf("%s %s %s\n", per[i].name, per[i].tel, per[i].address);
	}
}