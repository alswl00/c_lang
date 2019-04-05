#include <stdio.h>

int main(void) {
	for (int i = 60; i <= 120; i += 20)
		printf("%dkm => %fmile\n", i, i*0.621371);

	return 0;
}