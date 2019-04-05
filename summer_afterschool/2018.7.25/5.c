#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int square(int);
int cube(int);
int main(void) {
	int i;
	scanf("%d", &i);
	int s = square(i);
	int c = cube(i);

	printf("Á¦°ö : %d\n¼¼Á¦°ö : %d\n", s, c);
	return 0;
}

int square(int i) { 
	int n = i * i;
	return n;
}

int cube(int i) {
	int n = square(i)*i;
	return n;
}