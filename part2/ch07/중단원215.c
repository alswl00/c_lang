#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	int a[5] = { 0 };
	int *ptr = a;
	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	printf("%p\n", ptr+1);
	printf("%d\n", a[1]);
	printf("%d\n", *(ptr+1));
	
	char aa[] = "Seoul", *p = "Pusan";
	printf("%s\n", aa);
	printf("%s\n", p);
	//aa = "new";
	strcpy(aa, "New");
	//p = "Jeju";
	//strcpy(p, "Jeju");	//사이즈를 알수없음. 포인터는 사이즈를 정해놔야함.
	printf("%s\n", aa);
	//printf("%s\n", p);

	aa[1] = 'E';
	*(aa + 2) = 'O';
	//*(p + 1) = 'U';
	//p[2] = 'S';
	printf("%s\n", aa);	//SEOul
	//printf("%s\n", p);
}