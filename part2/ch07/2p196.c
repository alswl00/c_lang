#include <stdio.h>
void main() {
	int a[5] = { 10,20,30,40,50 };
	int i;
	int *p;
	p = a;
	for (i = 0; i < 5; i++)
		printf("a[%d] = %d \n", i, *(p + i));

	printf("\n");

	/*while (p != NULL) {
		printf("%d \n", *(p++));
	}*/
	

	//for (int i = 0; i < 5; i++)
		//printf("a[%d] = %d \n", i, a[i]);

	for (i = 0; i < 5; i++)
		printf("a[%d] = %d \n", i, (p + i));

	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("a[%d] = %d \n", i, &a[i]);
}