#include <stdio.h>

int main(void) {
	char carr[6] = { 'A','B','C','D','E','F' };

	char *cp = carr;

	cp = carr + 5;
	printf("%c %c %c %c %c %c\n", cp[0], cp[-1], cp[-2], cp[-3], cp[-4], cp[-5]);

	return 0;
}