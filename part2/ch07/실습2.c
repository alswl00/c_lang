#include <stdio.h>
int main() {
	int i;
	char *name[] = { "kimsuchul","leeyongsu","kimdongsu","bakgicheal","kimyongsuk","choigiwha","leesunhee","chebeangsuk","songdalsu","hajongsik" };
	printf("kimsuchul, leeyongsu, kimdongsu, bakgicheal, kimyoungsuk \n");
	printf("choigiwha, leesunhee, chebeangsuk, songdalsu, hajongsik\n\n");
	printf("k�� �����ϴ� �̸���");
	for (i = 0; i < 9; i++) {
		if (name[i][0] == 'k')
			printf("%12s", name[i]);
	}
	printf("\n�̻��Դϴ� \n");
}