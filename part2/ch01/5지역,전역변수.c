//p.60
#include <stdio.h>
int b/*=50*/;		//전역변수 = 글로벌 변수 => 전역변수는 함수 밖에 선언(나머지가 모두 사용)
					//전역변수는 0으로 초기화됨
void f() {
	int a = 20;		//지역변수
	printf("%d\n", a);
	int b = 50;		//전역변수<지역변수
	printf("%d\n", b);
}
int main() {
	f();	//함수가 불렸다가 돌아올때 함수 값이 사라짐(나중에 들어간 값이 먼저 사라짐 => 스택)

	int a = 10;
	{
		int a = 40;
		printf("%d\n", a);	//블록 안에 정의된 함수가 없을 시 a는 10이 찍힘
	}
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}