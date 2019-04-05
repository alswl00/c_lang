#include <stdio.h>
int main(){
	int sum = 0,i=1;
while (sum < 100) {
	sum += i;
	i++;
}
	printf("%d %d\n", sum, i);
	return 0;
}