#include <stdio.h>
void main() {
	struct MyStruct {
		char *name;
		int age;
		char *num;
	};
	struct MyStruct list[3] = { {"김수철",35,"345-6789"},{"홍길동",40,"123-4567"},{"갑순이",25,"212-3232"} };

	printf("\n직장 전화번호 \n \n");
	printf("성명 나이  전화번호 \n \n");
	for (int i = 0; i < 3; i++)  printf("%6s %3d %12s \n", list[i].name, list[i].age, list[i].num);

	printf("%d\n", sizeof(struct MyStruct));	//구조체의 총 사이즈
}