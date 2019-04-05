#include <stdio.h>

//void Second(); 선언 안해줌

void First() {
	printf("Call function First\n");
}

void Third() {
	Second();
	printf("Call function Third\n");
}

void Second() {
	printf("Call function Second\n");
}

int main() {
	printf("Start call function\n");
	First();
	Third();
	printf("End call function\n");
	return 0;
}