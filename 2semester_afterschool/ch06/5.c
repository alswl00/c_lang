#include <stdio.h>
#define TC
#ifdef TC
#include <conio.h>
#define MAX_INT 32767
#else 
#define MAX_INT 2147483647
#endif

int main() {
	int m = MAX_INT;
#ifdef TC
	system("notepad.exe");
#endif
	printf("Maximum value => %d\n", m);
#ifdef TC
	
#endif
		return 0;
}