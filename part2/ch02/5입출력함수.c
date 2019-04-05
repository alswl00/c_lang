#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("안녕하세요\n");
	getchar();		//콘솔 설정을 안해도 getchar를 쓰면 콘솔창이 뜨고 입력을 기다림
					//(많은 문장 처리시 getchar를 써서 작성한 프로그램 확인하는 용도로도 씀)

	/*int a;
	char str[5];
	gets();
	a = gets(str);
	printf("dd\n");
	printf("%d", a);
	printf("%s", str);
	getchar();*/

	/*char ch = getchar();
	scanf("%c", &ch);
	printf("%c\n", ch);*/
	char str[10];
	int e = gets(str);
	printf("%d\n", e);
	printf("%s\n", str);
	printf("============\n");
	int a = printf("Hello\n");		//printf를 리턴하면 글자의 갯수가 나옴
	printf("%d\n", a);
	int c, d;
	printf("==============\n");
	int b = scanf("%d\n", &c);
	printf("%d\n", b);		//scanf를 리턴하면 입력한 변수의 수만큼 찍힘
	getchar();
}