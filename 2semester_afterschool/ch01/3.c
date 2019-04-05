#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	FILE *ofp;

	//ifp = fopen("a.txt", "r");
	ofp = fopen("b.txt", "w");
	char c[7];
	int a[3];

	for (int i = 0; i < 5; i++) {
		printf("학생 정보를 입력하세요 : ");
		scanf("%s %d %d %d", c, &a[0],&a[1],&a[2]);
		fprintf(ofp,"%s %4d %4d %4d %8.2f\n", c,a[0],a[1],a[2],(float)(a[0]+a[1]+a[2])/3);
		}
	//fclose(ifp);
	fclose(ofp);
	return 0;
}