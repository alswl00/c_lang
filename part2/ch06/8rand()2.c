#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int num, n,i;
	srand((unsigned)time(NULL));
	num = rand() % 101 + 50;
	printf("50부터 150사이 안의 숫자를 입력하세요\n");
	for (i = 0; i < 8; i++) {
		scanf("%d", &n);
		if (n == num) {
			printf("정답입니다\n");
			break;
		}
		else if (n > num) printf("down\n");
		else printf("up\n");
		
	}
	if(i==8) printf("정답은 %d입니다.\n",num);
}