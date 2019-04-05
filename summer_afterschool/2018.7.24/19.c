#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int m, s;
	printf("¿¬ºÀ : ");
	scanf("%d", &m);
	if (m > 88000000)
		s = (m - 88000000) * 35 / 100 + 15920000;
	else if (m > 46000000)
		s = (m - 46000000) * 24 / 100 + 5820000;
	else if (m > 12000000)
		s = (m - 12000000) * 15 / 100 + 720000;
	else
		s = m * 6 / 100;

	printf("¼¼±Ý : %d\n", s);
	return 0;
}