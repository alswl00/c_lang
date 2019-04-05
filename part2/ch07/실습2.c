#include <stdio.h>
int main() {
	int i;
	char *name[] = { "kimsuchul","leeyongsu","kimdongsu","bakgicheal","kimyongsuk","choigiwha","leesunhee","chebeangsuk","songdalsu","hajongsik" };
	printf("kimsuchul, leeyongsu, kimdongsu, bakgicheal, kimyoungsuk \n");
	printf("choigiwha, leesunhee, chebeangsuk, songdalsu, hajongsik\n\n");
	printf("k로 시작하는 이름은");
	for (i = 0; i < 9; i++) {
		if (name[i][0] == 'k')
			printf("%12s", name[i]);
	}
	printf("\n이상입니다 \n");
}