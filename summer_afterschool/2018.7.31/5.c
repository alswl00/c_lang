#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct professor {
	char name[7];
	char tel[14];
	char address[21];
	char department[20];
	char ch[20];
	char subj[11];
};

int main(void) {
	struct professor pro[3];

	printf("��  ��    ��ȭ��ȣ        �� ��           �� ��    �� ��      �� ��\n");

	for (int i = 0; i < 3; i++) {
		scanf("%s %s %s %s %s %s", pro[i].name, pro[i].tel, pro[i].address, pro[i].department, pro[i].ch, pro[i].subj);
	}
}