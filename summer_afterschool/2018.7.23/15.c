#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i, m[4] = { 0,0,0,0 };
	scanf("%d", &i);
	while (i > 0) {
		if (i >= 50000) {
			i -= 50000; m[0]++;
		}
		else if (i >= 10000) {
			i -= 10000; m[1]++;
		}
		else if (i >= 5000) {
			i -= 5000; m[2]++;
		}
		else if (i >= 1000) {
			i -= 1000; m[3]++;
		}
	}
	printf("50000원권 : %d개, 10000원권 : %d개, 5000원권 : %d개, 1000원권 : %d개\n", m[0], m[1], m[2], m[3]);
	return 0;
}