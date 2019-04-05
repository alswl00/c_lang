#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i;
	scanf("%d", &i);

	switch (i / 10) {
	case 10: case 9: printf("A\n"); break;
	case 8: printf("B\n"); break;
	case 7: printf("C\n"); break;
	case 6: printf("D"); break;
	default: printf("E");
	}
	return 0;
}