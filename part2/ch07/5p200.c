#include <stdio.h>
void main() {
	char aa[6] = "KOREA";
	char *p;
	int i;
	p = &aa[0];

	printf("p = % p\n", &aa[0]);
	printf("p = %p \n", p);
	printf("p = %s \n", p + 2);
	printf("&p = %p \n", &p);
	printf("*p = %c \n \n", *p);

	for (i = 0; i <= 4; i++) {
		printf("aa[%d] = %c, 林家绰 %p \n", i, *(p + i), &aa[i]);
		printf("aa[%d] = %c, 林家绰 %p \n", i, aa[i], p+i);
		printf("aa[%d] = %c, 林家绰 %p \n", i, *(aa+i), &p[i]);
		printf("aa[%d] = %c, 林家绰 %p \n", i, p[i], aa + i);
	}
}