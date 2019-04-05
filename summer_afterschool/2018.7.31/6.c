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
	
	struct student stu1 = { "홍길동","011-1111-1111","0",1111,99,"ㄱ","박종학"};
	struct student stu2 = { "조명호","017-3245-3278","0",2222,98,"ㄴ","이종석" };
	struct student stu3 = { "최윤호","011-2222-2456","0",3333,97,"ㄷ","신용현" };

		printf("주소 : ");
		gets(stu1.address);
		printf("주소 : ");
		gets(stu2.address);
		printf("주소 : ");
		gets(stu3.address);

	printf("이  름    전화번호        주 소           학번\n");

	
		printf("%s %s %s %d\n", stu1.name, stu1.tel, stu1.address, stu1.id);
		printf("%s %s %s %d\n", stu2.name, stu2.tel, stu2.address, stu2.id);
		printf("%s %s %s %d\n", stu3.name, stu3.tel, stu3.address, stu3.id);
}