#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	printf("�ȳ��ϼ���\n");
	getchar();		//�ܼ� ������ ���ص� getchar�� ���� �ܼ�â�� �߰� �Է��� ��ٸ�
					//(���� ���� ó���� getchar�� �Ἥ �ۼ��� ���α׷� Ȯ���ϴ� �뵵�ε� ��)

	/*int a;
	char str[5];
	gets();
	a = gets(str);
	printf("dd\n");
	printf("%d", a);
	printf("%s", str);
	getchar();*/

	/*char ch = getchar();
	scanf("%c", &ch);
	printf("%c\n", ch);*/
	char str[10];
	int e = gets(str);
	printf("%d\n", e);
	printf("%s\n", str);
	printf("============\n");
	int a = printf("Hello\n");		//printf�� �����ϸ� ������ ������ ����
	printf("%d\n", a);
	int c, d;
	printf("==============\n");
	int b = scanf("%d\n", &c);
	printf("%d\n", b);		//scanf�� �����ϸ� �Է��� ������ ����ŭ ����
	getchar();
}