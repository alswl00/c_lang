#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[7];
	int id;
	int score;
	char sub[13];
	char job[30];
};

int main(void) {
	
	struct student stu[5];

	for (int i = 0; i < 5; i++) {
		printf("�̸� : ");
		gets(stu[i].name);
		printf("�й� : "); 
		gets(stu[i].id);
		printf("������� : ");
		gets(stu[i].score);
		printf("�а� : ");
		gets(stu[i].sub);
		printf("���� : ");
		gets(stu[i].job);
		printf("--------------------------------");
	}

	printf("�̸�  �й�  �������  �а�  ����\n");
	
	for (int i = 0; i < 5; i++) {
		printf("%s %d %d %s %s", stu[i].name, stu[i].id, stu[i].score, stu[i].sub, stu[i].job);
	}

	return 0;
}