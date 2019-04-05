#include <stdio.h>
int main(void) {
	char c = 0xa1;
	char d = 0xe1;
	
	for (int i = 1; i <= 4; i++) {
		if (i == 1 || i == 4) {
			for (int j = 1; j <= 5; j++) 
				printf("%c%c", c,d);
		}
		else {
			for (int j = 1; j <= 5; j++){
				if(j==1||j==5)
					printf("%c%c", c, d);
				else printf("  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}