#include <stdio.h>
int a(int b);
//int b = 10;	전역변수
int main() {
	int b = 10;		//지역변수
	printf("첫 번째 b는 %d\n", b);
	a(b);
	printf("두 번재 b는 %d\n", b);
	return 0;
}
int a(int b) {
	b = b + 20;
	return b;
}