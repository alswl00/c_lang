//p.108 실습3번
//1~7까지 홀수의 합

#include <stdio.h>

int main() {
	int a = 1, sum = 0;
	do {
		sum = sum + a;
		if (a >= 7) break;
		a = a + 2;
	} while (1);
	printf("%d\n", sum);


	//for(a=1,sum=0;a<=7;sum+=a,a+=2);

	return 0;
}