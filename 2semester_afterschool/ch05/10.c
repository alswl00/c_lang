#include <stdio.h>
#include <stdlib.h>

int main() {
	double *ap;
	int i;
	ap = (double *)calloc(5,sizeof(double));
	for (i = 0; i < 5; i++)
		printf("%lf\n", ap[i]);
	
	return 0;
}