#include <stdio.h>
main() {
	int a, y = 0;
	for (a = 1; a < 10; a = a + 2) 
		y = y + a;
	printf("%d\n", y);
	
}