#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

void win(int,int);
int main(void) {
	int n,num;
	printf("����������(0 : ����, 1 : ����, 2 : ��, 3 : �׸�)\n");
	
	srand((long)time(NULL));
	while (1) {
		printf("��>>");
		scanf("%d", &n);
		if (n == 3) break;
		num = rand() % MAX;
		printf("��ǻ��>>%d\n", num);
		win(n, num);
		printf("\n");
	}

	return 0;
}

void win(int a,int b) {
	if (a == b) printf("���");
	else if (a == 0) {
		if (a == 1) printf("��");
		else printf("��");
	}
	else if (a == 1) {
		if (b == 0) printf("��");
		else printf("��");
	}
	else {
		if (b == 0) printf("��");
		else printf("��");
	}
}