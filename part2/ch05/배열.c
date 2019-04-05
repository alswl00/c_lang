#include <stdio.h>

int main() {

	char b[2][3];
	printf("%d\n%d\n", sizeof(b), sizeof(b[0]));
	int c[5];
	printf("%d\n", sizeof(c));

	char a[3][5][4];
	printf("%d %d %d\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]));

}