#include <stdio.h>
void main() {
	struct MyStruct {
		char *name;
		int age;
		char *num;
	};
	struct MyStruct list;
	list.name = "김수철";
	list.age = 35;
	list.num = "345-6789";

	printf("\n 전화번호 \n");
	printf("성명 : %s \n", list.name);
	printf("나이 : %d \n", list.age);
	printf("전화번호 : %s \n", list.num);
}