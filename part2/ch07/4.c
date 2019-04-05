#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void scanData(int num, int *p) {
	for (int i = 0; i < num; i++)
		//scanf("%d", &a[i]);
		//scanf("%d", p + i);
		scanf("%d", &p[i]);
}
void printData(int num, int *p) {
	for (int i = 0; i < num; i++) {
		//printf("%d ", a[i]);
		//printf("%d ", *(p + i));
		printf("%d %p", p[i], p + i);
		printf("\n");
	}
}
int main() {
	//int a[10];
	int *p = 0; //NULL
	//p = &a;
	int num;
	printf("입력할 데이터의 갯수 : ");
	scanf("%d", &num);
	p = (int *)malloc(sizeof(int)*num);

	scanData(num,p);

	printData(num,p);

	free(p);
}