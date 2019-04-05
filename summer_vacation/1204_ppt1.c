#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void First(); 함수 선언 안해줌

int main() {
	printf("Start call function\n");
	First();
	printf("End call function\n");
	return 0;
}

void First() {
	printf("Call function First\n");
}