#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[10];
	char tel[20];
	char address[21];
	int id;
	int score;
	char department[20];
	char job[30];
	char professor[7];
};

int main(void) {
	
	struct student stu1 = { "ȫ�浿","011-1111-1111","0",1111,99,"��","������"};
	struct student stu2 = { "����ȣ","017-3245-3278","0",2222,98,"��","������" };
	struct student stu3 = { "����ȣ","011-2222-2456","0",3333,97,"��","�ſ���" };

		printf("�ּ� : ");
		gets(stu1.address);
		printf("�ּ� : ");
		gets(stu2.address);
		printf("�ּ� : ");
		gets(stu3.address);

	printf("��  ��    ��ȭ��ȣ        �� ��           �й�\n");

	
		printf("%s %s %s %d\n", stu1.name, stu1.tel, stu1.address, stu1.id);
		printf("%s %s %s %d\n", stu2.name, stu2.tel, stu2.address, stu2.id);
		printf("%s %s %s %d\n", stu3.name, stu3.tel, stu3.address, stu3.id);
}