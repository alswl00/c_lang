#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int k, e, m, t = 0; float av;
	printf("�������� : ");
	scanf("%d", &k);
	printf("�������� : ");
	scanf("%d", &e);
	printf("�������� : ");
	scanf("%d", &m);
	t = k + e + m;
	av = (float)t / 3;
	printf("���� :%d, ��� : %.3f ==> ", t, av);
	switch ((int)av/ 10) {
	case 10: case 9:case 8: printf("����\n"); break;
	case 7: printf("����\n"); break;
	case 6: case 5: printf("��¿��\n"); break;
	default: printf("�ɷº���\n");
	}
	return 0;
}