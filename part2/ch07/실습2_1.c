#include <stdio.h>
#include <string.h>

int main() {
	int i;
	char *name[] = { "kimsuchul","leeyongsu","kimdongsu","bakgicheal","kimyongsuk","choigiwha","leesunhee","chebeangsuk","songdalsu","hajongsik" };
	printf("kimsuchul, leeyongsu, kimdongsu, bakgicheal, kimyoungsuk \n");
	printf("choigiwha, leesunhee, chebeangsuk, songdalsu, hajongsik\n\n");
	printf("k가 들어있는 이름은");
	for (i = 0; i < 10; i++) {
		for (int j = 0; j < strlen(name[7]); j++)
			if (name[i][j] == 'k') {
				printf("%12s", name[i]);
				break;
			}
	}
	printf("\n이상입니다 \n");
}