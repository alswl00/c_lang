#pragma warning (disable:4996)
#include <stdio.h>

struct cus {
	char *np;
	int age;
	char sex;
	char add[18];
	char tele[14];
} s1;

int main() {
	s1.np = (char*)malloc(sizeof(char) * 10);
	printf("�̸��� �Է��ϼ���>>");
	scanf("%s", s1.np);
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