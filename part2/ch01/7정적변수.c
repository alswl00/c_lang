//p.63 �� 2-8

#include <stdio.h>
void static_ex();
int i = 1;
void main() {
	for (i; i <= 5; i++)
		static_ex();
}
void static_ex() {
	static int sum = 0;
	sum = sum
		+ 10;
	printf("%d�� sum ���� %d�̴�\n", i, sum);

}