#include <stdio.h>
void main() {
	struct MyStruct {
		char *name;
		int age;
		char *num;
	};
	struct MyStruct list;
	list.name = "���ö";
	list.age = 35;
	list.num = "345-6789";

	printf("\n ��ȭ��ȣ \n");
	printf("���� : %s \n", list.name);
	printf("���� : %d \n", list.age);
	printf("��ȭ��ȣ : %s \n", list.num);
}