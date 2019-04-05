#include <stdio.h>

int main() {
	char c[][10] = { "school","subject","program","study" };
	printf("%x\n", &c[0][0]);
	printf("%x\n", c[0]);
	printf("%x\n", &c[1][0]);		//c[0]+10
	printf("%x\n", c[1]);			//열 크기가 10이기 때문
	printf("%s\n", &c[2][3]);

	double a[2][3][4];
	printf("%d\n", sizeof(a));
	printf("%d\n", &a[0][0][0]);
	printf("%d\n", &a[0][2][2]);
	printf("%x\n", &a[0][0][0]);
	printf("%x\n", &a[0][2][2]);
	return 0;
}