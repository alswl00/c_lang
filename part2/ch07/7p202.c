#include <stdio.h>
#include <string.h>

void main() {
	int i;
	char *aaa[3] = { "korea","computer","school" };
	for (i = 0; i < 3; i++) {
		printf("aaa[%2d] data = %s  \n", i, aaa[i]);
		printf("aaa[%2d] data = %p  \n", i, aaa[i]);//&aaa[0][0]
		printf("aaa[%2d] data = %p  \n", i, &aaa[i]);//�������� �迭(4�� ����)
	}


	char a[] = "KOREA";
	printf("%d %d\n", sizeof(a), strlen(a));

	int aa[3];
	int aa2[3];
	int *ppp = aa;
	//aa = aa2;		//�迭�� �ּ� ���� �Ұ���
	//aa++;	
	ppp = aa2;
	ppp++;
}