#include <stdio.h>

float change(void);
int main(void) {
	change();


	return 0;
}

float change(void) {
	float c, f;

	for (c = 0; c <= 100; c += 0.5) {
		f = (9.0/5.0)*(c + 32.0);
		printf("%.2f\n", f);
	}

}