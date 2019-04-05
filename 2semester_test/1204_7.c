#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int a(int *t,int num);

int main() {
	int *p = NULL;
	int num;
	printf("소수를 구하려는 최종 숫자를 입력하세요 : ");
	scanf("%d", &num);
	p = (int *)(malloc(sizeof(int)*num));
	int cnt=a(p,num);
	for (int i = 0; i < num; i++) printf("%d ", p[i]);
	printf("%d\n", cnt);
	free(p);
	return 0;
}

int a(int *t,int num) {
	int cnt = 0;
	int *r =NULL;
	for (int i = 0; i < num; i++) {
		if (t[i] % 2 != 0 || t[i] == 2) {
			if (!(t[i] % 3 == 0 && t[i] % 5 == 0 && t[i] % 7 == 0 && t[i] % 11 == 0)) {
				r = t[i];
				cnt++;
			}
		}
	}
	return cnt;
}