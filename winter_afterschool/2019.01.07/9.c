#include <stdio.h>
#include <string.h>
void reverse(unsigned char st[]) {
	for (int i = strlen(st) - 2; i >= 0; i-=2)
		printf("%c%c", st[i],st[i+1]);
	printf("\n");
}

int main(void) {
	unsigned char st[] = "°¡³ª´Ù";
	reverse(st);
}