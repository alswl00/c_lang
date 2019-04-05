//p.70 ¿¹ 2-15

#include <stdio.h>
main() {
	int max = 2147483647;
	printf("%d\n", max);
	max = max + 1;
	printf("%d\n", max);
	max = max - 1;
	printf("%d\n", max);
	return 0;
}