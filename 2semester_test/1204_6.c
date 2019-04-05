#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int num);
int sum(int num);

int main() {
	int num, i;
	printf("마지막 수 입력 : ");
	scanf("%d", &num);
	i=sum(num);
	printf("%d\n", i);
	return 0;
}

int fact(int num) {
	if (num==1) return 1;
	else fact(num - 1)*num;
}

int sum(int num) {
	int k=0;
	for (int i = 1; i <= num; i++) {
		if (i != num)  printf("%d! + ", i);
		else printf("%d! = ", i);
		k += fact(num);
	}
	return k;
}