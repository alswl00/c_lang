#include <stdio.h>

union student {
	int number;
	char *name;
	double age;
};

/*struct student {
	int number;
	char *name;
	int age;
};*/

int main(void) {
	union student list;

	//struct student list;
	//list.number = 0; list.name = "0"; list.age = 0;

	list.number = 20101;
	printf("\n ��ȣ :%d, �̸� : %c, ���� :%d\n", list.number, list.name, list.age);
	list.name = "ȫ�浿";
	printf("\n ��ȣ :%d, �̸� :%s, ���� :%d\n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n ��ȣ :%d, �̸� :%d, ���� :%d\n", list.number, list.name, list.age);

	printf("\n ��ȣ :%d, �̸� :%d, ���� :%0.f\n", &list.number, &list.name, &list.age);
	printf("%d\n", sizeof(union student));
}