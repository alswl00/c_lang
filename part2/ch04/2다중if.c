//p.118 예 2-32

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int age;
	printf("당신의 나이는?(1.15세이상, 2.15세미만): ");
	scanf("%d", &age);
	if (age == 1) {
		printf("입장 가능합니다.\n");
	}
	if (age == 2) {
		printf("입장할 수 없습니다.\n");
	}
	return 0;
}