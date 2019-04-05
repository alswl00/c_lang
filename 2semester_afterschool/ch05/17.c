#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i, num; float sum = 0;
	float *p = NULL;
	printf("배열의 크기를 결정하는 숫자를 입력하세요 : ");
	scanf("%d", &num);
	
	p = malloc(num * sizeof(float));

	for (i = 0; i < num; i++, p++) {
		scanf("%f", p);
		sum += *p;
	}

	p -= num;

	printf("%f\n",sum);

	free(p);

	return 0;	
}