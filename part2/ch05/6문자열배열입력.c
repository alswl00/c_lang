#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	/*char a[20];
	printf("���ڿ� �Է�?:");
	scanf("%s", a);
	printf("�Է� ���ڿ� ���!: %s\n", a);
	printf("2��° ���� ���!:%c\n", a[1]);
	printf("�Է� ���ڿ� ���!: %s\n", &a[3]);*/

	char a[] = "MyClass";
	printf("%s\n", a);
	printf("%s\n", &a[0]);
	printf("%s\n", &a[2]);

	return 0;
}