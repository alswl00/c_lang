#include <stdio.h>
#include <string.h>
#include <math.h>
int my_atoi(char s[]) {
	int a = 0;
	for (int i = strlen(s) - 1; i >= 0; i--)
		a += (s[i] - '0') * (int)(pow(10, strlen(s) - 1 - i));
	return a;
}

int main(void) {
	char st[] = "12345";
	int a=0;
	a = my_atoi(st);

	printf("%d\n", a);

	return 0;
}