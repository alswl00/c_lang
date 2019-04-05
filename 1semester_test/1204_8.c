#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n,i=0;
	printf("임의의 수 입력(종료시 0 입력) >> ");
	
	 do {
		scanf("%d", &n);
		if (n >= 10 && n <= 20)
			i += n;
	 } while (n != 0);
	printf("10부터 20 사이 수의 합 : %d\n", i);
	return 0;
}