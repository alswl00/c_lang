#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 3

void win(int,int);
int main(void) {
	int n,num;
	printf("가위바위보(0 : 가위, 1 : 바위, 2 : 보, 3 : 그만)\n");
	
	srand((long)time(NULL));
	while (1) {
		printf("나>>");
		scanf("%d", &n);
		if (n == 3) break;
		num = rand() % MAX;
		printf("컴퓨터>>%d\n", num);
		win(n, num);
		printf("\n");
	}

	return 0;
}

void win(int a,int b) {
	if (a == b) printf("비김");
	else if (a == 0) {
		if (a == 1) printf("패");
		else printf("승");
	}
	else if (a == 1) {
		if (b == 0) printf("패");
		else printf("승");
	}
	else {
		if (b == 0) printf("패");
		else printf("승");
	}
}