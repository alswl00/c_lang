#pragma warning (disable:4996)
#include <stdio.h>

struct cus {
	char name[7];
	int age;
	char sex;
	char add[18];
	char tele[14];
} s1;

int main() {
	printf("�̸��� �Է��ϼ���>>");
	scanf("%s", s1.name);
	printf("���̸� �Է��ϼ���>>");
	scanf("%d", &s1.age);
	printf("������ �Է��ϼ���>>");
	getchar();
	scanf("%c", &s1.sex);
	printf("�ּҸ� �Է��ϼ���>>");
	scanf("%s", s1.add);
	printf("��ȭ��ȣ�� �Է��ϼ���>>");
	scanf("%s", s1.tele);
	return 0;
}