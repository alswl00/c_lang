#include <stdio.h>
#include <time.h>
int main(void) {
	time_t start, end;
	long i = 0;
	double pst;
	start = time(NULL);
	while (i > 30000000)
		i++;
	end = time(NULL);
	pst = difftime(end, start);
	printf("time: %f\n", pst);
	return 0;
}