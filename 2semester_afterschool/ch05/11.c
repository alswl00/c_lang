#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int *ip;
	int size = 5;
	int cnt = 0;
	int num;
	int i;
	ip = (int *)calloc(size, sizeof(int));
	while (1) {
		printf("양수를 입력하세요=>");
		scanf("%d", &num);
		if (num <= 0) break;
		if (cnt < size) {
			ip[cnt++] = num;
		}
		else {
			size += 5;
			ip = (int*)realloc(ip, size * sizeof(int));
			ip[cnt++] = num;
		}
	}
	for (i = 0; i < cnt; i++) 
		printf("%5d", ip[i]);
	printf("\n");
	free(ip);

	return 0;
}