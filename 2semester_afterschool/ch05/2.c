#include <stdio.h>

int main() {
	char str1[20] = "Hello World";
	char str2[20] = "Good bye";
	/*const*/ char * /*const */p3 = str1;
	p3[0] = 'A';
	p3 = str2;
}