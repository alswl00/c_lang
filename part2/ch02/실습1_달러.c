//p.88 �ǽ� 1��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	/*printf("%d�޷�\n",100000/1118);
	printf("�Ž��� �� : %d��\n", 100000 - (100000 / 1118) * 1118);*/

	int a;
	const int b = 1118;
	printf("��ȭ�� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("%d�޷�\n", a / b);
	printf("�Ž��� �� : %d��\n", a - (a / b)*b);

	/*int c;
	int k;
	k=printf("abcd");
	printf("%d\n", k);

	int p = scanf("%d%d\n", &k,&c);
	printf("%d\n", p);
	*/
}