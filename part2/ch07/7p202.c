#include <stdio.h>
#include <string.h>

void main() {
	int i;
	char *aaa[3] = { "korea","computer","school" };
	for (i = 0; i < 3; i++) {
		printf("aaa[%2d] data = %s  \n", i, aaa[i]);
		printf("aaa[%2d] data = %p  \n", i, aaa[i]);//&aaa[0][0]
		printf("aaa[%2d] data = %p  \n", i, &aaa[i]);//포인터의 배열(4씩 증가)
	}


	char a[] = "KOREA";
	printf("%d %d\n", sizeof(a), strlen(a));

	int aa[3];
	int aa2[3];
	int *ppp = aa;
	//aa = aa2;		//배열은 주소 변경 불가능
	//aa++;	
	ppp = aa2;
	ppp++;
}