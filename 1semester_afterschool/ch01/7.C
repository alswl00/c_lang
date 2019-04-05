#include <stdio.h>

int main(void) 
{
	unsigned char ch1 = 255;  __int8 ch2 = 127;
	printf("%d", 30);    printf(" %d", 10);
	printf(" %d", 030);    printf(" %d", 010);
	printf(" %d", 0X2F);    printf(" %d\n", 0x1b);
	
	printf(" %f", 3.14);      printf(" %f", 2.0);
	printf(" %f", 3.14E+2);      printf(" %f", 21.8e2);
	printf(" %f", 3.14E-2);      printf(" %f\n", 218e-3);
	printf("\nch1=%u, %hhu, %d\n",ch1,ch1,ch1);
	printf("%\n, ch2= %hhu, %d\n", ch2, ch2);
	
	return 0;
}