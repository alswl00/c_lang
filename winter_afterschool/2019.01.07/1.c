#include <stdio.h>
int main(void) {
	unsigned char i, count = 0;
	system("chcp 437");
	for (i = 128; i < 255; i++) {
		printf("%c(%3d) ", i, i);
		count++;
		if(count==6) {
			count = 0;
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}