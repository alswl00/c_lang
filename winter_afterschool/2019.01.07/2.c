#include <stdio.h>
int main(void) {
	char hangul[3] = "°¡";
	unsigned char code;
	code = hangul[0];
	printf("%x %d\n", code, code);
	code = hangul[1];
	printf("%x %d\n", code, code);

	unsigned b1 = 0xb0;
	unsigned b2 = 0xa1;
	printf("%c%c\n", b1, b2);
	printf("%c\n", b1);
	printf("%c\n", b2);

	return 0;
}