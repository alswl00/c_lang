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
	printf("이름을 입력하세요>>");
	scanf("%s", s1.name);
	printf("나이를 입력하세요>>");
	scanf("%d", &s1.age);
	printf("성별을 입력하세요>>");
	getchar();
	scanf("%c", &s1.sex);
	printf("주소를 입력하세요>>");
	scanf("%s", s1.add);
	printf("전화번호를 입력하세요>>");
	scanf("%s", s1.tele);
	return 0;
}