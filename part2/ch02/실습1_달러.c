//p.88 실습 1번

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	/*printf("%d달러\n",100000/1118);
	printf("거스름 돈 : %d원\n", 100000 - (100000 / 1118) * 1118);*/

	int a;
	const int b = 1118;
	printf("원화를 입력하세요 : ");
	scanf("%d", &a);
	printf("%d달러\n", a / b);
	printf("거스름 돈 : %d원\n", a - (a / b)*b);

	/*int c;
	int k;
	k=printf("abcd");
	printf("%d\n", k);

	int p = scanf("%d%d\n", &k,&c);
	printf("%d\n", p);
	*/
}