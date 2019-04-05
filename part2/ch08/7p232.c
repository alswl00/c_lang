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
	printf("\n 번호 :%d, 이름 : %c, 나이 :%d\n", list.number, list.name, list.age);
	list.name = "홍길동";
	printf("\n 번호 :%d, 이름 :%s, 나이 :%d\n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n 번호 :%d, 이름 :%d, 나이 :%d\n", list.number, list.name, list.age);

	printf("\n 번호 :%d, 이름 :%d, 나이 :%0.f\n", &list.number, &list.name, &list.age);
	printf("%d\n", sizeof(union student));
}