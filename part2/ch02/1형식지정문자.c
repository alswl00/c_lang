//p.81 예 2-16

#include <stdio.h>

void main() {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a);
	printf("%-7d@@@\n", a);	//-는 왼쪽정렬, 0은 공백을 0으로 채움
	printf("%f\n", b);
	printf("%9f\n", b);
	printf("%9.2f\n", b);
	printf("\\안녕\\\n");	//역슬래시를 출력하고 싶을때는 2개를 쓰면 출력됨 
	printf("\"안녕\"\n");
	printf("   \b하세요");

	printf("%x ", 160);
	printf("%X\n", 160);
	printf("%o ", 160);
	printf("%O\n", 160);
	printf("%e ", 123.456);
	printf("%E\n", 123.456);

}